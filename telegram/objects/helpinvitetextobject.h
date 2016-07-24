// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_HELPINVITETEXT_OBJECT
#define LQTG_TYPE_HELPINVITETEXT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/helpinvitetext.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT HelpInviteTextObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(HelpInviteTextClassType)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(HelpInviteText core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum HelpInviteTextClassType {
        TypeHelpInviteText
    };

    HelpInviteTextObject(const HelpInviteText &core, QObject *parent = 0);
    HelpInviteTextObject(QObject *parent = 0);
    virtual ~HelpInviteTextObject();

    void setMessage(const QString &message);
    QString message() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const HelpInviteText &core);
    HelpInviteText core() const;

    HelpInviteTextObject &operator =(const HelpInviteText &b);
    bool operator ==(const HelpInviteText &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void messageChanged();

private Q_SLOTS:

private:
    HelpInviteText m_core;
};

inline HelpInviteTextObject::HelpInviteTextObject(const HelpInviteText &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

inline HelpInviteTextObject::HelpInviteTextObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

inline HelpInviteTextObject::~HelpInviteTextObject() {
}

inline void HelpInviteTextObject::setMessage(const QString &message) {
    if(m_core.message() == message) return;
    m_core.setMessage(message);
    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
}

inline QString HelpInviteTextObject::message() const {
    return m_core.message();
}

inline HelpInviteTextObject &HelpInviteTextObject::operator =(const HelpInviteText &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT messageChanged();
    Q_EMIT coreChanged();
    return *this;
}

inline bool HelpInviteTextObject::operator ==(const HelpInviteText &b) const {
    return m_core == b;
}

inline void HelpInviteTextObject::setClassType(quint32 classType) {
    HelpInviteText::HelpInviteTextClassType result;
    switch(classType) {
    case TypeHelpInviteText:
        result = HelpInviteText::typeHelpInviteText;
        break;
    default:
        result = HelpInviteText::typeHelpInviteText;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

inline quint32 HelpInviteTextObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case HelpInviteText::typeHelpInviteText:
        result = TypeHelpInviteText;
        break;
    default:
        result = TypeHelpInviteText;
        break;
    }

    return result;
}

inline void HelpInviteTextObject::setCore(const HelpInviteText &core) {
    operator =(core);
}

inline HelpInviteText HelpInviteTextObject::core() const {
    return m_core;
}

#endif // LQTG_TYPE_HELPINVITETEXT_OBJECT