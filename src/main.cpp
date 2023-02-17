/**
 * \file main.hpp
 * \brief Ejemplo para realizar los movimientos básicos de un robot vehicular motorizado
 * \author Joseph Santiago Portilla. Ing. Electrónico - @JoePortilla
 */

#include <Arduino.h>
#include "robotMoves.hpp"

// Pines
const uint8_t mDerPinIN1 = 13;
const uint8_t mDerPinIN2 = 17;
const uint8_t mIzqPinIN1 = 16;
const uint8_t mIzqPinIN2 = 4;
// Canales PWM
const uint8_t mDerPWM = 0;
const uint8_t mIzqPWM = 1;
// Ajustes PWM
const uint32_t freqPWM = 10000;
const uint8_t resPWM = 8;

// Creación de un objeto de la clase Robot
Robot vehiculo;

void setup()
{
    // Ajustes iniciales de los motores del vehiculo robotico.
    vehiculo.setup(mDerPinIN1, mDerPinIN2, mIzqPinIN1, mIzqPinIN2,
                   mDerPWM, mIzqPWM, freqPWM, resPWM);
}

void loop()
{
    // Mover hacia adelante el robot al 70% del PWM
    vehiculo.forward(70);
    delay(1500);
    vehiculo.stop();
    delay(20);

    // Mover hacia atras el robot al 70% del PWM
    vehiculo.reverse(70);
    delay(1500);
    vehiculo.stop();
    delay(20);

    // Girar hacia la izquierda al 70% del PWM
    vehiculo.left(70);
    delay(2000);
    vehiculo.stop();
    delay(20);

    // Girar hacia la derecha al 70% del PWM
    vehiculo.right(70);
    delay(2000);
    vehiculo.stop();
    delay(20);

    // Girar hacia la izquierda al 70% del PWM. Guiado por solo un motor
    vehiculo.leftb(70);
    delay(2000);
    vehiculo.stop();
    delay(20);

    // Girar hacia la derecha al 70% del PWM. Guiado por solo un motor
    vehiculo.rightb(70);
    delay(2000);
    vehiculo.stop();
    delay(20);
}
