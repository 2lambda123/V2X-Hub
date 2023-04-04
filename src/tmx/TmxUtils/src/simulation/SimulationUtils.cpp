#include <simulation/SimulationEnvVar.h>

namespace tmx::utils::sim{
    bool is_simulation_mode() {
        if (std::getenv(SIMULATION_MODE)) {
            std::string sim_mode = std::getenv(SIMULATION_MODE);
            if ( sim_mode.compare("true") == 0 || sim_mode.compare("TRUE") == 0) {
                return true;
            }
        }
        return false;

    }

    std::string get_sim_config(const char *config_name) {
        if (is_simulation_mode() && config_name) {
            try {
                std::string config =  std::getenv(config_name);
                return config;
            }
            catch(const std::logic_error &e) {
                std::string config_name_str = config_name;
                throw TmxException("Simulation Config " + config_name_str + " not set!");
            }
        } else {
            throw TmxException("V2X-Hub not in sumulation mode or config param name is null pointer!");
        }
        return "";
    } 
}