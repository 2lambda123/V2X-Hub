#include "PluginClientClockAware.h"

#include "jsoncpp/json/json.h"

namespace tmx::utils {

    PluginClientClockAware::PluginClientClockAware(const std::string & name)
        : PluginClient(name)
    {
        // check for simulation mode enabled by environment variable
        bool simulationMode = sim::is_simulation_mode();

        using namespace fwha_stol::lib::time;
        clock = std::make_shared<CarmaClock>(simulationMode);
        if (simulationMode) {
            AddMessageFilter<tmx::messages::TimeSyncMessage>(this, &PluginClientClockAware::HandleTimeSyncMessage);

        }

    }


    void PluginClientClockAware::HandleTimeSyncMessage(tmx::messages::TimeSyncMessage &msg, routeable_message &routeableMsg ) {
        PLOG(logDEBUG) << "Message Received " << msg.to_string() << std::endl;
        this->getClock()->update( msg.get_timestep() );
        if (sim::is_simulation_mode() ) {
            SetStatus<uint>(Key_Simulation_Time_Step, msg.get_timestep());

        }
    }

    void PluginClientClockAware::OnStateChange(IvpPluginState state) {
        PluginClient::OnStateChange(state);
        if (state == IvpPluginState_registered) {
            if (sim::is_simulation_mode()) {
                bool rtn = SetStatus(Key_Simulation_Mode, "ON");
            }
               
        }
    }

}