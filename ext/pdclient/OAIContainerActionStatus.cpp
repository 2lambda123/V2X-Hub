/**
 * Port Drayage Web Service.
 * Web Service for Loading/Unloading/Inspection interactions for Port Drayage Operations.
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIContainerActionStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIContainerActionStatus::OAIContainerActionStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContainerActionStatus::OAIContainerActionStatus() {
    this->initializeModel();
}

OAIContainerActionStatus::~OAIContainerActionStatus() {}

void OAIContainerActionStatus::initializeModel() {

    m_vehicle_id_isSet = false;
    m_vehicle_id_isValid = false;

    m_container_id_isSet = false;
    m_container_id_isValid = false;

    m_action_id_isSet = false;
    m_action_id_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_requested_isSet = false;
    m_requested_isValid = false;

    m_completed_isSet = false;
    m_completed_isValid = false;
}

void OAIContainerActionStatus::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContainerActionStatus::fromJsonObject(QJsonObject json) {

    m_vehicle_id_isValid = ::OpenAPI::fromJsonValue(vehicle_id, json[QString("vehicle_id")]);
    m_vehicle_id_isSet = !json[QString("vehicle_id")].isNull() && m_vehicle_id_isValid;

    m_container_id_isValid = ::OpenAPI::fromJsonValue(container_id, json[QString("container_id")]);
    m_container_id_isSet = !json[QString("container_id")].isNull() && m_container_id_isValid;

    m_action_id_isValid = ::OpenAPI::fromJsonValue(action_id, json[QString("action_id")]);
    m_action_id_isSet = !json[QString("action_id")].isNull() && m_action_id_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_requested_isValid = ::OpenAPI::fromJsonValue(requested, json[QString("requested")]);
    m_requested_isSet = !json[QString("requested")].isNull() && m_requested_isValid;

    m_completed_isValid = ::OpenAPI::fromJsonValue(completed, json[QString("completed")]);
    m_completed_isSet = !json[QString("completed")].isNull() && m_completed_isValid;
}

QString OAIContainerActionStatus::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContainerActionStatus::asJsonObject() const {
    QJsonObject obj;
    if (m_vehicle_id_isSet) {
        obj.insert(QString("vehicle_id"), ::OpenAPI::toJsonValue(vehicle_id));
    }
    if (m_container_id_isSet) {
        obj.insert(QString("container_id"), ::OpenAPI::toJsonValue(container_id));
    }
    if (m_action_id_isSet) {
        obj.insert(QString("action_id"), ::OpenAPI::toJsonValue(action_id));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_requested_isSet) {
        obj.insert(QString("requested"), ::OpenAPI::toJsonValue(requested));
    }
    if (m_completed_isSet) {
        obj.insert(QString("completed"), ::OpenAPI::toJsonValue(completed));
    }
    return obj;
}

QString OAIContainerActionStatus::getVehicleId() const {
    return vehicle_id;
}
void OAIContainerActionStatus::setVehicleId(const QString &vehicle_id) {
    this->vehicle_id = vehicle_id;
    this->m_vehicle_id_isSet = true;
}

bool OAIContainerActionStatus::is_vehicle_id_Set() const{
    return m_vehicle_id_isSet;
}

bool OAIContainerActionStatus::is_vehicle_id_Valid() const{
    return m_vehicle_id_isValid;
}

QString OAIContainerActionStatus::getContainerId() const {
    return container_id;
}
void OAIContainerActionStatus::setContainerId(const QString &container_id) {
    this->container_id = container_id;
    this->m_container_id_isSet = true;
}

bool OAIContainerActionStatus::is_container_id_Set() const{
    return m_container_id_isSet;
}

bool OAIContainerActionStatus::is_container_id_Valid() const{
    return m_container_id_isValid;
}

QString OAIContainerActionStatus::getActionId() const {
    return action_id;
}
void OAIContainerActionStatus::setActionId(const QString &action_id) {
    this->action_id = action_id;
    this->m_action_id_isSet = true;
}

bool OAIContainerActionStatus::is_action_id_Set() const{
    return m_action_id_isSet;
}

bool OAIContainerActionStatus::is_action_id_Valid() const{
    return m_action_id_isValid;
}

QString OAIContainerActionStatus::getStatus() const {
    return status;
}
void OAIContainerActionStatus::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIContainerActionStatus::is_status_Set() const{
    return m_status_isSet;
}

bool OAIContainerActionStatus::is_status_Valid() const{
    return m_status_isValid;
}

qint64 OAIContainerActionStatus::getRequested() const {
    return requested;
}
void OAIContainerActionStatus::setRequested(const qint64 &requested) {
    this->requested = requested;
    this->m_requested_isSet = true;
}

bool OAIContainerActionStatus::is_requested_Set() const{
    return m_requested_isSet;
}

bool OAIContainerActionStatus::is_requested_Valid() const{
    return m_requested_isValid;
}

qint64 OAIContainerActionStatus::getCompleted() const {
    return completed;
}
void OAIContainerActionStatus::setCompleted(const qint64 &completed) {
    this->completed = completed;
    this->m_completed_isSet = true;
}

bool OAIContainerActionStatus::is_completed_Set() const{
    return m_completed_isSet;
}

bool OAIContainerActionStatus::is_completed_Valid() const{
    return m_completed_isValid;
}

bool OAIContainerActionStatus::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_vehicle_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_container_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_requested_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_completed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContainerActionStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_vehicle_id_isValid && m_container_id_isValid && m_action_id_isValid && m_status_isValid && m_requested_isValid && true;
}

} // namespace OpenAPI