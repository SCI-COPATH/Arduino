#define led_1 13
#define led_2 8
#define push_but 2
int prev=0;

//FIRST LED BLINK ALWAYS
// -> SECOND LED ON WHEN BUTTON PRESSED
// -> SECOND LED OFF WHEN AGAIN BUTTON PRESED

void setup()
{
  pinMode(led_1,OUTPUT);  
  pinMode(led_2,OUTPUT);
  pinMode(push_but,INPUT);
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(led_1,HIGH);
  delay(1000);
  int a=digitalRead(push_but);
  Serial.println("push button working ");
  Serial.print(a);


  //first one not working ,problem ->delay in reading, not entering inside 'if' ie remaining in only high state always
            //  if(a==1)
            //  {
            //    digitalWrite(led_2,HIGH);
            //    int in=digitalRead(push_but);
            //    if(in==1)
            //    {
            //      digitalWrite(led_2,LOW);
            //      Serial.println("randon");
            //    }
            //    }


//SECOND LED ON ONLY WHEN PRESSED AND OFF IN ALL OTHER CASES
            //    if(a==1)  
            //    {
            //    digitalWrite(led_2,HIGH);
            //    a--;
            //    }
            //    else
            //      { digitalWrite(led_2,LOW);
            //    }
            




//SECOND LED ON ONLY WHEN BUTTON PRESSED AND OFF WHEN AGAIN BUTTON PRESSED

             if(a==1)
              {
                if(prev==1)
                {
                  digitalWrite(led_2,LOW);
                  prev=0;
                }
                else if(prev==0)
                {
                  digitalWrite(led_2,HIGH);
                  prev=1;
                }
              }

  
  digitalWrite(led_1,LOW);
  delay(250);
}
