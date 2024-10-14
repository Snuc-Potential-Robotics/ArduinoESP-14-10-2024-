const int trigpin=9;
const int echopin=10;
const int led=13;

void setup() 
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopiAn,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  long duration=pulseIn(echopin,HIGH);
  int distance=duration*0.034/2;
  Serial.println(distance);
  if(distance <= 10)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
