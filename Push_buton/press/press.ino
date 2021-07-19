#define RED 12
#define BLUE 11
#define IN A0
#define RED_ACTIVE_TIME 1000
#define BLUE_ACTIVE_TIME 2000

bool status=0,redStatus=0,blueStatus=0;
unsigned long long initialTime,pressTime;
void setup(){
    pinMode(RED,OUTPUT);
    pinMode(BLUE,OUTPUT);
    pinMode(IN,INPUT_PULLUP);
}
void loop(){
    if(status==0&&digitalRead(IN)==LOW){
        status=1;
        initialTime=millis();
    }else if(status==1&&digitalRead(IN)==HIGH){
        status=0;
        pressTime=millis()-initialTime;
    }
    if(pressTime>=RED_ACTIVE_TIME&&pressTime<=BLUE_ACTIVE_TIME){
        pressTime=0;
        redStatus=!redStatus;
        digitalWrite(RED,redStatus);
    }else if(pressTime>BLUE_ACTIVE_TIME){
        pressTime=0;
        blueStatus=!blueStatus;
        digitalWrite(BLUE,blueStatus);
    }       
}