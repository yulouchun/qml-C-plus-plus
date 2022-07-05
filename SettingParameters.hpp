#ifndef _SETTINGPARAMETERS_HPP_
#define _SETTINGPARAMETERS_HPP_

/*
Data flow:
    user click ->Setting.qml - >SettingParam( SettingParameters.cpp) - > ParametersAssisAngle -> SurroundView3DRender.cpp ->render()
*/
#include <QObject>
namespace MrSV
{
 
    class ParametersAssisAngle
    {
    private:
        ParametersAssisAngle()
        {
            assistAlpha = 1.0;
            angle1_state = true;
            angle2_state = true;
            angle3_state = true;
        }
        static ParametersAssisAngle * m_Params;

    public:
        static ParametersAssisAngle * getInstance()
        {
            if (m_Params == NULL)
            {
                m_Params = new ParametersAssisAngle();
            }
            return m_Params;
        }
        float assistAlpha;
        bool angle1_state;
        bool angle2_state;
        bool angle3_state;
    };




    class SettingParameters:public QObject
    {
        Q_OBJECT
        Q_PROPERTY(float assistAlpha READ getAssistAlpha WRITE setAssistAlpha);
        Q_PROPERTY(bool  angle1_state READ getAngle1_state WRITE setAngle1_state);
        Q_PROPERTY(bool  angle2_state READ getAngle2_state WRITE setAngle2_state);
        Q_PROPERTY(bool  angle3_state READ getAngle3_state WRITE setAngle3_state);
    public:
        SettingParameters();
        Q_INVOKABLE float getAssistAlpha();
        Q_INVOKABLE void  setAssistAlpha(float alpha);
        Q_INVOKABLE bool  getAngle1_state();
        Q_INVOKABLE void  setAngle1_state(bool state);
        Q_INVOKABLE bool  getAngle2_state();
        Q_INVOKABLE void  setAngle2_state(bool state);
        Q_INVOKABLE bool  getAngle3_state();
        Q_INVOKABLE void  setAngle3_state(bool state);

    private:
        float assistAlpha;
        bool angle1_state;
        bool angle2_state;
        bool angle3_state; 
        ParametersAssisAngle * m_parameters;
    };

}
#endif
