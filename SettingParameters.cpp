#include "SettingParameters.hpp"
#include <iostream>
namespace MrSV
{

ParametersAssisAngle * ParametersAssisAngle::m_Params = NULL;

SettingParameters::SettingParameters()
{
    m_parameters = ParametersAssisAngle::getInstance();
}

float SettingParameters::getAssistAlpha()
{
    assistAlpha = m_parameters->assistAlpha;
    return m_parameters->assistAlpha;
}

void  SettingParameters::setAssistAlpha(float alpha)
{
    assistAlpha = alpha;
    m_parameters->assistAlpha = alpha;
}

bool  SettingParameters::getAngle1_state()
{
    angle1_state = m_parameters->angle1_state;
    return m_parameters->angle1_state;
}

bool   SettingParameters::getAngle2_state()
{
    angle2_state = m_parameters->angle2_state;
    return m_parameters->angle2_state;
}

bool  SettingParameters::getAngle3_state()
{
    angle3_state = m_parameters->angle3_state;
    return m_parameters->angle3_state;
}

void  SettingParameters::setAngle1_state(bool state)
{
    angle1_state =  state;
    m_parameters->angle1_state =  state;
}


void  SettingParameters::setAngle2_state(bool state)
{
    angle2_state =  state;
    m_parameters->angle2_state =  state;
}

void  SettingParameters::setAngle3_state(bool state)
{
    angle3_state =  state;
    m_parameters->angle3_state =  state;
}

}
