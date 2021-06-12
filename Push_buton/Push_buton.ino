int led=5;
int push=2;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(push,INPUT); 
}

void loop()
{
  int read = digitalRead(push);
  if(read==1)
  {
    delay(3000); //3 sec w8
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
  }
  
}
