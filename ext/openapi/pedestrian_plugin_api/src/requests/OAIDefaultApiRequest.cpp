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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIDefaultApiRequest.h"

namespace OpenAPI {

OAIDefaultApiRequest::OAIDefaultApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIDefaultApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIDefaultApiRequest::~OAIDefaultApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIDefaultApiRequest::~OAIDefaultApiRequest()";
}

QMap<QString, QString>
OAIDefaultApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIDefaultApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIDefaultApiRequest::getRawSocket(){
    return socket;
}


void OAIDefaultApiRequest::psmPostRequest(){
    qDebug() << "/pedestrian_plugin/psm";
    connect(this, &OAIDefaultApiRequest::psmPost, handler.data(), &OAIDefaultApiHandler::psmPost);

    
 
    
    QJsonDocument doc;
    socket->readJson(doc);
    QJsonObject obj = doc.object();
    OAIPsm oai_psm;
    ::OpenAPI::fromJsonValue(oai_psm, obj);
    

    emit psmPost(oai_psm);
}



void OAIDefaultApiRequest::psmPostResponse(){
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::OK);
    socket->writeHeaders();
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIDefaultApiRequest::psmPostError(QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    socket->write(error_str.toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIDefaultApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIDefaultApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
