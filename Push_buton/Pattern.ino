//PROBLEM STATMENT 
//   -> KEEP THREE PUSH BUTTONS
//   -> GENERATE THREE PATTERNS WHEN EACH OF THEM IS PRESSED


//DIFFERENT PATTERN PRINT
#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define led5 9
#define led6 8
#define delay_fac 250

int a,b,c;
#define push_but1 3
#define push_but2 4
#define push_but3 5

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  
  pinMode(push_but1, INPUT);
  pinMode(push_but2, INPUT);
  pinMode(push_but3,INPUT);
  
  Serial.begin(9600);

  
}

void loop()
{
  // for entering concerned if blocks 
  int but_state1=digitalRead(push_but1);
  int but_state2=digitalRead(push_but2);
  int but_state3=digitalRead(push_but3);
  
  if(but_state1)
  {
    //YELLOW BLINKING -> iff no other buttons are pressed
    while((but_state2 && but_state3) == 0 )
    {
    Serial.println(but_state1);
    digitalWrite(led1,HIGH);
    delay(delay_fac);
    digitalWrite(led1,LOW);
      
   
     but_state2=digitalRead(push_but2);
     but_state3=digitalRead(push_but3);
     //whenevr a button is presed exit from that particular loop and check for condition 
      if(but_state2 ==1 || but_state3 ==1)
      { Serial.println("confirmed exit");
        break;
      }
      
    digitalWrite(led3,HIGH);
    delay(delay_fac);
    digitalWrite(led3,LOW);

    digitalWrite(led5,HIGH);
    delay(delay_fac);
    digitalWrite(led5,LOW);
      
    }

  }
  
  if(but_state2)
  {
    //RED BLINKING -> iff no other buttons are pressed
    while((but_state1 && but_state3) == 0)
    {
    Serial.println(but_state2);
    digitalWrite(led2,HIGH);
    delay(delay_fac);
    digitalWrite(led2,LOW);

    but_state1=digitalRead(push_but1);
     but_state3=digitalRead(push_but3);
      if(but_state1 ==1 || but_state3 ==1)
      { Serial.println("confirmed exit");
        break;
      }
    
    digitalWrite(led4,HIGH);
    delay(delay_fac);
    digitalWrite(led4,LOW);

    digitalWrite(led6,HIGH);
    delay(delay_fac);
    digitalWrite(led6,LOW);
    }

  }
  
  if(but_state3)
  {
    //total BLINKING -> iff no other buttons are pressed
    while((but_state1 && but_state2) == 0)
    {
    Serial.println(but_state3);
    digitalWrite(led1,HIGH);
    delay(delay_fac);
    digitalWrite(led1,LOW);

    digitalWrite(led2,HIGH);
    delay(delay_fac);
    digitalWrite(led2,LOW);

    but_state1=digitalRead(push_but1);
     but_state2=digitalRead(push_but2);
      if(but_state1 ==1 || but_state2 ==1)
      { Serial.println("confirmed exit");
        break;
      }
    
    
    digitalWrite(led3,HIGH);
    delay(delay_fac);
    digitalWrite(led3,LOW);
    
    Serial.println(but_state2);
    digitalWrite(led4,HIGH);
    delay(delay_fac);
    digitalWrite(led4,LOW);
    
    but_state1=digitalRead(push_but1);
     but_state2=digitalRead(push_but2);
      if(but_state1 ==1 || but_state2 ==1)
      { Serial.println("confirmed exit");
        break;
      }

    digitalWrite(led5,HIGH);
    delay(delay_fac);
    digitalWrite(led5,LOW);

    digitalWrite(led6,HIGH);
    delay(delay_fac);
    digitalWrite(led6,LOW);
    }
  }
  
}



// tinkercad -> https://www.tinkercad.com/things/4eAzPfkcyO5-dazzling-habbi/editel?sharecode=q9r67qg0QOvRnOV8cOfcGrbk6gsGeyq18Vu79Q_UgrE
