int led_1=5;
int led_2=8;
int delay1=1000;
int delay2=3000;
int count=delay2/delay1;
void setup()
{
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT); 
}

void loop()
{ 
    digitalWrite(led_2,HIGH);
    for(int i=0; i<count;i++)
    {
    digitalWrite(led_1,HIGH);
    delay(delay1);
    digitalWrite(led_1,LOW);
    }
    digitalWrite(led_2,LOW);
    delay(delay2);
  
}
