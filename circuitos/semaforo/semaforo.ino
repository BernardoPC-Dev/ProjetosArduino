int pinR = 2;
int pinG = 3;
int pinY = 4;

void setup()
{
 pinMode(pinR,OUTPUT);
 pinMode(pinG,OUTPUT);
 pinMode(pinY,OUTPUT);
}
void loop()
{
 digitalWrite(pinR,HIGH);

 delay(4000);

 digitalWrite(pinR,LOW);
 digitalWrite(pinG,HIGH);

 delay(4000);

 digitalWrite(pinG,LOW);
 digitalWrite(pinY,HIGH);

 delay(2000);

 digitalWrite(pinY,LOW);
}
