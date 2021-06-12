
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
    digitalWrite(led,HIGH);
    int in=digitalRead(push);
    if(in==1)
    {
      digitalWrite(led,LOW);
    }
  }
  
}
