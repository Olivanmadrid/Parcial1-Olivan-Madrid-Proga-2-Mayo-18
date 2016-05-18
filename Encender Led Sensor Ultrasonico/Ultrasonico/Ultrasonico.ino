int ledrojo=6;
int lednaranja=7;
int ledverde=8;
long distancia;
long tiempo;
int led;   
void setup(){
  Serial.begin(9600);
  pinMode(11, OUTPUT); 
  pinMode(12, INPUT); 
  pinMode(ledrojo, OUTPUT); 
  pinMode(lednaranja, OUTPUT); 
  pinMode(ledverde, OUTPUT);   
}

void loop(){
  digitalWrite(11 ,LOW);
  delayMicroseconds(10);
  digitalWrite(11, HIGH); 
  delayMicroseconds(10);
  tiempo=pulseIn(12, HIGH); 
  distancia= int(0.017*tiempo); 
  if (distancia>40){
    led=1;
    digitalWrite(lednaranja,LOW);
    digitalWrite(ledrojo,LOW);
  }
  if (distancia<=40&&distancia>20){
    led=2;
    digitalWrite(ledverde,HIGH);
    digitalWrite(ledrojo,HIGH);
  }
  if (distancia<=20){
    led=3;
    digitalWrite(ledverde,HIGH);
    digitalWrite(lednaranja,HIGH);
  }
  switch(led){
    case 1:
    digitalWrite(ledverde,HIGH);
    break;
    case 2:
    digitalWrite(lednaranja,HIGH);
    break;
    case 3:
  
  delay(50);

} 
}
