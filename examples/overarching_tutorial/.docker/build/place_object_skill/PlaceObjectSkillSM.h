//
// Statemachine code from reading SCXML file 'PlaceObjectSkillSM.scxml'
// Created by: The Qt SCXML Compiler version 2 (Qt 6.4.2)
// WARNING! All changes made in this file will be lost!
//

#ifndef PLACEOBJECTSKILLSM_H
#define PLACEOBJECTSKILLSM_H

#include <QScxmlStateMachine>
#include <QString>
#include <QVariant>

class PlaceObjectSkillAction: public QScxmlStateMachine
{
    /* qmake ignore Q_OBJECT */
    Q_OBJECT
    Q_PROPERTY(bool idle)
    Q_PROPERTY(bool wait_goal_response)
    Q_PROPERTY(bool wait_result)
    Q_PROPERTY(bool goal_done)
    Q_PROPERTY(bool send_failure)


public:
    Q_INVOKABLE PlaceObjectSkillAction(QObject *parent = 0);
    ~PlaceObjectSkillAction();



Q_SIGNALS:


private:
    struct Data;
    friend struct Data;
    struct Data *data;
};

Q_DECLARE_METATYPE(::PlaceObjectSkillAction*)

#endif // PLACEOBJECTSKILLSM_H
