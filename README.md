# Biblioteca para mover un vehículo robótico motorizado con el driver DRV8833 y ESP32

## Configuración
La configuración del robot y sus motores se realiza mediante la función ``setup`` que contiene los siguientes parámetros:
- **motRightIN1**: GPIO al que se conecta el pin IN1 del motor Derecho.
- **motRightIN2**: GPIO al que se conecta el pin IN2 del motor Derecho.
- **motLeftIN1**: GPIO al que se conecta el pin IN1 del motor Izquierdo.
- **motLeftIN2**: GPIO al que se conecta el pin IN2 del motor Izquierdo.
- **motRightPWM**: Canal de PWM a utilizar con el motor Derecho. (ESP32: 16 Canales)
- **motLeftPWM**: Canal de PWM a utilizar con el motor Izquierdo.(ESP32: 16 Canales)
- **freqPWM**: Frecuencia del PWM. (ESP32: De 10 Hz a 40 MHz)
- **resPWM**: Resolución del PWM. (ESP32: De 1 bit a 16 bits)

## Movimientos
Para mover el robot se hace uso de las siguientes funciones:
- Función ``forward``: Mover el robot hacia adelante con un porcentaje de PWM dado [0,100]%.
- Función ``reverse``: Mover el robot hacia atrás con un porcentaje de PWM dado [0,100]%.
- Función ``left``: Girar el robot hacia la izquierda con un porcentaje de PWM dado [0,100]%. Giro guiado por los dos motores.
- Función ``right``: Girar el robot hacia la derecha con un porcentaje de PWM dado [0,100]%. Giro guiado por los dos motores.
- Función ``leftb``: Girar el robot hacia la izquierda con un porcentaje de PWM dado [0,100]%. Giro guiado por solo un motor.
- Función ``rightb``: Girar el robot hacia la derecha con un porcentaje de PWM dado [0,100]%. Giro guiado por solo un motor.
- Función ``stop``: Detener el robot.