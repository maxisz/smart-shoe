int pinOut = 13;
int pinIn = 2;

void setup()
{
  pinMode(pinOut,OUTPUT);
  pinMode(pinIn,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(3)== LOW)
  {
    digitalWrite(13,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(13,LOW);
    delay(10);
    
  }
  
}
