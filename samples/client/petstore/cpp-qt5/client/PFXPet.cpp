/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "PFXPet.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "PFXHelpers.h"

namespace test_namespace {

PFXPet::PFXPet(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

PFXPet::PFXPet() {
    this->initializeModel();
}

PFXPet::~PFXPet() {}

void PFXPet::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_category_isSet = false;
    m_category_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_photo_urls_isSet = false;
    m_photo_urls_isValid = false;

    m_tags_isSet = false;
    m_tags_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void PFXPet::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void PFXPet::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::test_namespace::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_category_isValid = ::test_namespace::fromJsonValue(category, json[QString("category")]);
    m_category_isSet = !json[QString("category")].isNull() && m_category_isValid;

    m_name_isValid = ::test_namespace::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_photo_urls_isValid = ::test_namespace::fromJsonValue(photo_urls, json[QString("photoUrls")]);
    m_photo_urls_isSet = !json[QString("photoUrls")].isNull() && m_photo_urls_isValid;

    m_tags_isValid = ::test_namespace::fromJsonValue(tags, json[QString("tags")]);
    m_tags_isSet = !json[QString("tags")].isNull() && m_tags_isValid;

    m_status_isValid = ::test_namespace::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString PFXPet::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject PFXPet::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::test_namespace::toJsonValue(id));
    }
    if (category.isSet()) {
        obj.insert(QString("category"), ::test_namespace::toJsonValue(category));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::test_namespace::toJsonValue(name));
    }
    if (photo_urls.size() > 0) {
        obj.insert(QString("photoUrls"), ::test_namespace::toJsonValue(photo_urls));
    }
    if (tags.size() > 0) {
        obj.insert(QString("tags"), ::test_namespace::toJsonValue(tags));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::test_namespace::toJsonValue(status));
    }
    return obj;
}

qint64 PFXPet::getId() const {
    return id;
}
void PFXPet::setId(const qint64 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

PFXCategory PFXPet::getCategory() const {
    return category;
}
void PFXPet::setCategory(const PFXCategory &category) {
    this->category = category;
    this->m_category_isSet = true;
}

QString PFXPet::getName() const {
    return name;
}
void PFXPet::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

QList<QString> PFXPet::getPhotoUrls() const {
    return photo_urls;
}
void PFXPet::setPhotoUrls(const QList<QString> &photo_urls) {
    this->photo_urls = photo_urls;
    this->m_photo_urls_isSet = true;
}

QList<PFXTag> PFXPet::getTags() const {
    return tags;
}
void PFXPet::setTags(const QList<PFXTag> &tags) {
    this->tags = tags;
    this->m_tags_isSet = true;
}

QString PFXPet::getStatus() const {
    return status;
}
void PFXPet::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool PFXPet::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (category.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (photo_urls.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (tags.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool PFXPet::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_photo_urls_isValid && true;
}

} // namespace test_namespace
