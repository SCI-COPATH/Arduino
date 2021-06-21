int led_1=5;
int led_2=8;
int delay1=500;
int delay2=3000;
int count=delay2/delay1;   //1000*3=3000... so 3 times loop
void setup()
{
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  //Serial.begin(9600); 
}

void loop()
{ 
  //Serial.print(count);
  
    digitalWrite(led_2,HIGH);
    
    for(int i=0; i<count/2;i++)   //two times delay so /2 
    {
      //Serial.println("Entered loop ");
    digitalWrite(led_1,HIGH);
    delay(delay1);
    digitalWrite(led_1,LOW);
    delay(delay1);
    }
    
    digitalWrite(led_2,LOW);
    
    for(int i=0;i<count/2;i++) //this will actuaklly create a delay of three sec
    {
     digitalWrite(led_1,HIGH); 
     delay(delay1);
     digitalWrite(led_1,LOW);
      delay(delay1);
    }
  
}
