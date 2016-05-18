const int inputPin=2;
const int LedPin=12;
long randNumber;
int value = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
  pinMode(LedPin, OUTPUT);
  randomSeed(analogRead(0));

  }

void loop()
{
  value=digitalRead(inputPin); //lectura digital de pin
  // Serial.println(value);
  //mandar msj a puerto serie en funcion del valor leido
  if(value==1)

 {
  Serial.println("Encendido  Numero gereado es: ");
  randNumber = random(1,50);
  digitalWrite(LedPin, HIGH);
  Serial.println(randNumber);
 }

 else
 {
  digitalWrite(LedPin, LOW);
 }
 delay(100);
}

