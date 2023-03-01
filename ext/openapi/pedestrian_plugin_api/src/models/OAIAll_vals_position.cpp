/**
 * Pedestrian Plugin API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIAll_vals_position.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAll_vals_position::OAIAll_vals_position(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAll_vals_position::OAIAll_vals_position() {
    this->initializeModel();
}

OAIAll_vals_position::~OAIAll_vals_position() {}

void OAIAll_vals_position::initializeModel() {

    m_lat_isSet = false;
    m_lat_isValid = false;

    m_lon_isSet = false;
    m_lon_isValid = false;

    m_elevation_isSet = false;
    m_elevation_isValid = false;
}

void OAIAll_vals_position::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAll_vals_position::fromJsonObject(QJsonObject json) {

    m_lat_isValid = ::OpenAPI::fromJsonValue(lat, json[QString("lat")]);
    m_lat_isSet = !json[QString("lat")].isNull() && m_lat_isValid;

    m_lon_isValid = ::OpenAPI::fromJsonValue(lon, json[QString("lon")]);
    m_lon_isSet = !json[QString("lon")].isNull() && m_lon_isValid;

    m_elevation_isValid = ::OpenAPI::fromJsonValue(elevation, json[QString("elevation")]);
    m_elevation_isSet = !json[QString("elevation")].isNull() && m_elevation_isValid;
}

QString OAIAll_vals_position::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAll_vals_position::asJsonObject() const {
    QJsonObject obj;
    if (m_lat_isSet) {
        obj.insert(QString("lat"), ::OpenAPI::toJsonValue(lat));
    }
    if (m_lon_isSet) {
        obj.insert(QString("lon"), ::OpenAPI::toJsonValue(lon));
    }
    if (m_elevation_isSet) {
        obj.insert(QString("elevation"), ::OpenAPI::toJsonValue(elevation));
    }
    return obj;
}

double OAIAll_vals_position::getLat() const {
    return lat;
}
void OAIAll_vals_position::setLat(const double &lat) {
    this->lat = lat;
    this->m_lat_isSet = true;
}

bool OAIAll_vals_position::is_lat_Set() const{
    return m_lat_isSet;
}

bool OAIAll_vals_position::is_lat_Valid() const{
    return m_lat_isValid;
}

double OAIAll_vals_position::getLon() const {
    return lon;
}
void OAIAll_vals_position::setLon(const double &lon) {
    this->lon = lon;
    this->m_lon_isSet = true;
}

bool OAIAll_vals_position::is_lon_Set() const{
    return m_lon_isSet;
}

bool OAIAll_vals_position::is_lon_Valid() const{
    return m_lon_isValid;
}

double OAIAll_vals_position::getElevation() const {
    return elevation;
}
void OAIAll_vals_position::setElevation(const double &elevation) {
    this->elevation = elevation;
    this->m_elevation_isSet = true;
}

bool OAIAll_vals_position::is_elevation_Set() const{
    return m_elevation_isSet;
}

bool OAIAll_vals_position::is_elevation_Valid() const{
    return m_elevation_isValid;
}

bool OAIAll_vals_position::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_lat_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lon_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_elevation_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAll_vals_position::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_lat_isValid && m_lon_isValid && true;
}

} // namespace OpenAPI
