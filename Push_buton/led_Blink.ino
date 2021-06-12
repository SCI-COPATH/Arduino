int led_1=5;
int led_2=8;
void setup()
{
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT); 
}

void loop()
{ 
    digitalWrite(led_1,HIGH);
    delay(1000);      
    digitalWrite(led_1,LOW);
    delay(1000);
    digitalWrite(led_2,HIGH);
    delay(500);
    digitalWrite(led_2,LOW);
    delay(500);
  
}
