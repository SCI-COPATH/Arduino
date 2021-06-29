int prev =0;
#define fac 250
#define red 5
#define blue 4
#define push 12
int demp =0;
int state;
void setup()
{
  pinMode(push, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT); 
}

void loop()
{state=0;
   state = digitalRead(push);
   demp=demp+state;// the count the delay causwesd
  
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
    demp=0;
    
  }
 
 //problem exit when long press continoous blinking of red occurs
 
 if(demp>1)
    { prev=0;
     
    }
  
  else if(demp>1)   // for long press
  {
    if(prev==0)
    {
  digitalWrite(blue, HIGH);
  delay(fac); 
  prev= 1;
    }
    
    else if(prev==1)
    {
      digitalWrite(blue, LOW);
      delay(fac); 
      prev= 0;
    }
    
  }
  
  
  
}
