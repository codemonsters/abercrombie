/*
    Abercrombie
    Robot cuadrúpedo didáctico y minimalista
    www.codemonsters.es
*/

#include <Servo.h>

void setup()
{
    // Inicializamos los servos
    servoDelantero.attach(PIN_SERVO_DELANTERO);
    servoTrasero.attach(PIN_SERVO_TRASERO);

    // Ponemos ambos servos en su posición central
    servoDelantero.write(90);
    servoTrasero.write(90);

    delay(1000);
}


void loop()
{
    // Movimiento recto
    servoDelantero.write(120);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
    servoTrasero.write(40);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
    servoDelantero.write(60);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
    servoTrasero.write(140);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
}
