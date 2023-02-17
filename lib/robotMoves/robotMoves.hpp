/**
 * \file car.hpp
 * \brief Archivo de cabecera para desarrollar los movimientos básicos de un robot vehicular motorizado
 * \author Joseph Santiago Portilla. Ing. Electrónico - @JoePortilla
 */

#ifndef ROBOTMOVES_HPP
#define ROBOTMOVES_HPP

// Es necesario descargar e incluir la biblioteca del driver de motores DRV8833 en la carpeta lib del proyecto.
#include "drv8833.hpp"

/**
 * \brief Clase para instanciar un vehiculo motorizado que utiliza el driver DRV8833.
 * Incluye funciones que permiten su movimiento, configurar sus pines y los ajustes del PWM.
 */
class Robot
{
public:
    /**
     * \brief Constructor inicial.
     */
    Robot();

    /**
     * \brief Función para configurar los pines de conexión de los
     * motores del vehiculo y los canales del PWM.
     * \param motRightIN1: GPIO al que se conecta el pin IN1 del motor Derecho.
     * \param motRightIN2: GPIO al que se conecta el pin IN2 del motor Derecho.
     * \param motLeftIN1: GPIO al que se conecta el pin IN1 del motor Izquierdo.
     * \param motLeftIN2: GPIO al que se conecta el pin IN2 del motor Izquierdo.
     * \param motRightPWM: Canal de PWM a utilizar con el motor Derecho.
     * \param motLeftPWM: Canal de PWM a utilizar con el motor Izquierdo.
     * \param freqPWM: Frecuencia del PWM. (ESP32: De 10 Hz a 40 MHz)
     * \param resPWM: Resolución del PWM. (ESP32: De 1 bit a 16 bits)
     */
    void setup(uint8_t motRightIN1, uint8_t motRightIN2, uint8_t motLeftIN1, uint8_t motLeftIN2,
               uint8_t motRightPWM, uint8_t motLeftPWM, uint32_t freqPWM, uint8_t resPWM);

    /**
     * \brief Función para mover el robot hacia adelante.
     * \param pPWM: Porcentaje de PWM  a aplicar a los motores [0, 100] %.
     */
    void forward(uint8_t pPWM);

    /**
     * \brief Función para mover el robot hacia atras.
     * \param pPWM: Porcentaje de PWM  a aplicar a los motores [0, 100] %.
     */
    void reverse(uint8_t pPWM);

    /**
     * \brief Función para girar el robot hacia la izquierda.
     * Giro guiado por los dos motores.
     * \param pPWM: Porcentaje de PWM  a aplicar a los motores [0, 100] %.
     */
    void left(uint8_t pPWM);

    /**
     * \brief Función para girar el robot hacia la derecha.
     * Giro guiado por los dos motores.
     * \param pPWM: Porcentaje de PWM  a aplicar a los motores [0, 100] %.
     */
    void right(uint8_t pPWM);

    /**
     * \brief Función para girar el robot hacia la izquierda.
     * Giro guiado por solo un motor.
     * \param pPWM: Porcentaje de PWM  a aplicar al motor que controla el giro [0, 100] %.
     */
    void leftb(uint8_t pPWM);

    /**
     * \brief Función para girar el robot hacia la derecha.
     * Giro guiado por solo un motor.
     * \param pPWM: Porcentaje de PWM  a aplicar al motor que controla el giro [0, 100] %.
     */
    void rightb(uint8_t pPWM);

    /**
     * \brief Función para detener el robot.
     * Ambos motores se detienen.
     * \param NA: Sin parámetros.
     */
    void stop();

private:
    Motor _motRight; // Instancia del Motor derecho
    Motor _motLeft;  // Instancia del Motor Izquierdo
};

#endif
