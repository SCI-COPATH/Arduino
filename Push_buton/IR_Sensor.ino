#define ir 12
#define led 13


void setup() {
  // put your setup code here, to run once:
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a= digitalRead(ir);
  if(a==1)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }

}
