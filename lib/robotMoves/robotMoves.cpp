/**
 * \file car.cpp
 * \brief Archivo de implementación para desarrollar los movimientos básicos de un robot vehicular motorizado
 * \author Joseph Santiago Portilla. Ing. Electrónico - @JoePortilla
 */

#include <Arduino.h>
#include "robotMoves.hpp"

Robot::Robot() {}

void Robot::setup(uint8_t motRightIN1, uint8_t motRightIN2, uint8_t motLeftIN1, uint8_t motLeftIN2,
                  uint8_t motRightPWM, uint8_t motLeftPWM, uint32_t freqPWM, uint8_t resPWM)
{
    // Configuración de pines y ajustes del canal de PWM para el motor derecho
    _motRight.setup(motRightIN1, motRightIN2, motRightPWM, freqPWM, resPWM);
    // Configuración de pines y ajustes del canal de PWM para el motor izquierdo
    _motLeft.setup(motLeftIN1, motLeftIN2, motLeftPWM, freqPWM, resPWM);
}

void Robot::forward(uint8_t pPWM)
{
    // Mover hacia adelante ambos motores con el ciclo de trabajo deseado.
    _motRight.forward(pPWM);
    _motLeft.forward(pPWM);
}

void Robot::reverse(uint8_t pPWM)
{
    // Mover hacia atras ambos motores con el ciclo de trabajo deseado.
    _motRight.reverse(pPWM);
    _motLeft.reverse(pPWM);
}

void Robot::left(uint8_t pPWM)
{
    // Mover hacia adelante el motor derecho.
    _motRight.forward(pPWM);
    // Mover hacia atras el motor izquierdo.
    _motLeft.reverse(pPWM);
}

void Robot::right(uint8_t pPWM)
{
    // Mover hacia atras el motor derecho.
    _motRight.reverse(pPWM);
    // Mover hacia adelante el motor izquierdo.
    _motLeft.forward(pPWM);
}

void Robot::leftb(uint8_t pPWM)
{
    // Mover hacia adelante el motor derecho.
    _motRight.forward(pPWM);
    // Detener el motor izquierdo
    _motLeft.stop();
}

void Robot::rightb(uint8_t pPWM)
{
    // Detener el motor derecho.
    _motRight.stop();
    // Mover hacia adelante el motor izquierdo.
    _motLeft.forward(pPWM);
}

void Robot::stop()
{
    // Detener ambos motores.
    _motRight.stop();
    _motLeft.stop();
}
