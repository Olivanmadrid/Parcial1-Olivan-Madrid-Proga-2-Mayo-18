int lightPin = 0;  //define a pin for fotoresistencia

int ledPin1 = 7;
int ledPin2 = 6;
int ledPin3 = 5;

void setup(){
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);    
}

void loop(){

    int lectura = analogRead(lightPin);
    Serial.print(lightPin);  
  Serial.println(" lightPin");   
  
    if(lectura < 300)
    {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);      
    }
    else if(lectura >= 300 && lectura < 500)
    {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
    }
    else if(lectura >= 500 && lectura < 700)
    {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
    }
    else if(lectura >= 700)
    {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);      
    }

    delay(100);
}
