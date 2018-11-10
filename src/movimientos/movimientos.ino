/*
    Abercrombie
    Robot cuadrúpedo didáctico y minimalista
    www.codemonsters.es
*/

#include <Servo.h>

#define PIN_SERVO_DELANTERO 5
#define PIN_SERVO_TRASERO 6
#define CENTRO_DELANTERO 70  // De 0 a 180
#define CENTRO_TRASERO 80     // De 0 a 180
#define FACTOR_DELANTERO 0.5  // De 0 a 1 (para reducir el movimiento de las patas delanteras)
#define FACTOR_TRASERO 0.5    // De 0 a 1 (para reducir el movimiento de las patas traseras)
#define PAUSA_ENTRE_MOVIMIENTOS  300 // En mili

Servo servoDelantero;
Servo servoTrasero;
int gradosLibresDelantero = 0;
int gradosLibresTrasero = 0;

void setup()
{
  // Calculamos cuántos grados libres nos quedan como máximo para poder movernos con cada servo (cuanto más se aleje de 90 el centro de cada servo, menos grados libres tendremos)
  if (CENTRO_DELANTERO > 90) {
    gradosLibresDelantero = 180 - CENTRO_DELANTERO;
  } else {
    gradosLibresDelantero = CENTRO_DELANTERO;
  }
  if (CENTRO_TRASERO > 90) {
    gradosLibresTrasero = 180 - CENTRO_TRASERO;
  } else {
    gradosLibresTrasero = CENTRO_TRASERO;
  }

  // Inicializamos los servos
  servoDelantero.attach(PIN_SERVO_DELANTERO);
  servoTrasero.attach(PIN_SERVO_TRASERO);

  // Ponemos ambos servos en su posición central
  posicionInicio();

  delay(1000);
}


void loop()
{
  avanza();
  //giraIzquierda();
  //giraDerecha();
  //retrocede();
}

// Avanza un paso
void avanza(){
    servoDelantero.write(CENTRO_DELANTERO + gradosLibresDelantero * FACTOR_DELANTERO);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
    servoTrasero.write(CENTRO_TRASERO - gradosLibresTrasero * FACTOR_TRASERO);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
    servoDelantero.write(CENTRO_DELANTERO - gradosLibresDelantero * FACTOR_DELANTERO);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
    servoTrasero.write(CENTRO_TRASERO + gradosLibresTrasero * FACTOR_TRASERO);
    delay(PAUSA_ENTRE_MOVIMIENTOS);
}

void giraIzquierda() {
  servoDelantero.write(CENTRO_DELANTERO);
  servoTrasero.write(CENTRO_TRASERO - gradosLibresTrasero * FACTOR_TRASERO);
  delay(PAUSA_ENTRE_MOVIMIENTOS);
  servoDelantero.write(CENTRO_DELANTERO - gradosLibresDelantero * FACTOR_DELANTERO);
  delay(PAUSA_ENTRE_MOVIMIENTOS);
  servoTrasero.write(CENTRO_TRASERO + gradosLibresTrasero * FACTOR_TRASERO);
  delay(PAUSA_ENTRE_MOVIMIENTOS);
}

void giraDerecha() {
  servoDelantero.write(CENTRO_DELANTERO);
  servoTrasero.write(CENTRO_TRASERO + gradosLibresTrasero * FACTOR_TRASERO);
  delay(PAUSA_ENTRE_MOVIMIENTOS);
  servoDelantero.write(CENTRO_DELANTERO + gradosLibresDelantero * FACTOR_DELANTERO);
  delay(PAUSA_ENTRE_MOVIMIENTOS);
  servoTrasero.write(CENTRO_TRASERO - gradosLibresTrasero * FACTOR_TRASERO);
  delay(PAUSA_ENTRE_MOVIMIENTOS);
}

void retrocede() {
  // TODO: No implementado
}

void posicionInicio() {
  servoDelantero.write(CENTRO_DELANTERO);
  servoTrasero.write(CENTRO_TRASERO);
}
