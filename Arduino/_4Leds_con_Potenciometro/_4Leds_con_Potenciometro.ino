int sensorPin=0;
int ledPin=13;
int ledPin1 = 7;
int ledPin2 = 6;
int ledPin3 = 5;
int sensorValue=0;


void setup() 
{
pinMode(ledPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);  
Serial.begin(9600);
}

void loop() 
{
   int lectura = analogRead(sensorPin);
  if(lectura < 251)
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);      
    }
    else if(lectura >= 251 && lectura < 500)
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
    }
    else if(lectura >= 501 && lectura < 750)
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
    }
    else if(lectura >= 751)
    {
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);      
    }

    delay(100);
}
