//PROBLEM STATEMENT
//      ->RED ON/OFF WHWN SINGLE TIME PRESS   
//      ->BLUE LED ON/OFF WHEN LONG PRESS (w8 not more than 500 msec) 

//works only for long press not more than 1 sec -> issue -blinking 



int prev =0;
#define fac 250
#define red 5
#define blue 4
#define push 12
int demp =0;
int state;
int pre =0;
void setup()
{
  pinMode(push, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT); 
}

void loop()
{
  //state=0;
   demp=0;
  
  // the count the delay causwesd
   demp = push_read();
   if(state==1 && demp==1) // condition for red led on off ->for single press
    {
         
     if(prev==0)
      {
        digitalWrite(red, HIGH);
        delay(fac); 
        prev= 1;
      }
    
     else if(prev==1)
      {
        digitalWrite(red, LOW);
        delay(fac); 
        prev= 0;
      }
      //demp=0;
      demp = push_read();
    }
  
 //problem exit when long press continoous blinking of red occurs
 
 //if(demp>1)
 //   { prev=0;
     
  //  }
  
    if(state==1 && demp>1)   // for long press
      {
        //digitalWrite(red, LOW);
        if(pre==0)
        {
          digitalWrite(blue, HIGH);
          delay(fac); 
          pre= 1;
        }
    
    else if(pre==1)
      {
        digitalWrite(blue, LOW);
        delay(fac); 
        pre= 0;
      }
    
      }
  
}

// fun to read push buton
int push_read()
{
   state = digitalRead(push);
   demp=demp+state;
   return demp;
}
