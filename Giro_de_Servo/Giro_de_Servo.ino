
#include <Servo.h>

Servo miServo;

const int pinPot = 0;
const int pinServo = 2;
const int pulsoMin = 650;  //pulso para girar en 0°
const int pulsoMax = 2550;  // pulso para girar en 180°

int valor;
int angulo;

void setup() {
miServo.attach(pinServo, pulsoMin, pulsoMax);
  
}

void loop() {
  valor = analogRead(pinPot);   //verifica el valor del potenciometro
  angulo = map(valor, 0, 1023, 180, 0);  // convierte el valor del potenciometro en angulo de giro
  miServo.write(angulo);  //giramos el servo al angulo deseado
  delay(20); //permite al servo llegar al angulo
  
}

