#define RED 12
#define BLUE 11
#define IN A0
#define RED_ACTIVE_TIME 1000
#define BLUE_ACTIVE_TIME 2000

bool redStatus=0,blueStatus=0,status=0;
unsigned long long initialTime,pressTime;

void setup(){
    pinMode(RED,OUTPUT);
    pinMode(BLUE,OUTPUT);
    pinMode(IN,INPUT_PULLUP);
}
void loop(){
    if(digitalRead(IN)==LOW){
        pressTime+=10;
    }
    else if(digitalRead(IN)==HIGH){
        status=1;
    }
    if(status==1){
        if(pressTime>=RED_ACTIVE_TIME&&pressTime<=BLUE_ACTIVE_TIME){
            pressTime=0;
            redStatus=!redStatus;
            digitalWrite(RED,redStatus);
        }else if(pressTime>BLUE_ACTIVE_TIME){
            pressTime=0;
            blueStatus=!blueStatus;
            digitalWrite(BLUE,blueStatus);
        } 
        status=0;
    }
    delay(10);      
}