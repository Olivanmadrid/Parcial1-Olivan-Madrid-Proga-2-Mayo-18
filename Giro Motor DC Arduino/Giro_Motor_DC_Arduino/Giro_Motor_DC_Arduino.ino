#define Motor 13     
#define LDR 0     
int luz = 0;       
int valor_sensor = 0;       

void setup() {      //Configuracion de los pin como entrada o salida 
  Serial.begin(9600);    
  pinMode(Motor,OUTPUT);
  pinMode(LDR,INPUT);
}

void loop ()  
{
  valor_sensor = analogRead(LDR); 
  luz = (5.0 * valor_sensor * 100.0)/10024; 
  Serial.print(luz);  
  Serial.println(" Luz");             
                     
  
  if (luz <= 23)  
  {
    digitalWrite (Motor, LOW);  
  }
  if (luz > 30)   
  {
    digitalWrite (Motor, HIGH);  
  }
}
