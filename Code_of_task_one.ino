#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;

int t =0;
void setup()
{
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
  s5.attach(10);
}

void loop()
{
  for(t=0; t<=90; t++)
  {
    s1.write(t);
    s2.write(t);
    s3.write(t);
    s4.write(t);
    s5.write(t);
    delay(15);
  }
  for(t=90; t>=0; t--)
  {
    s1.write(t);
    s2.write(t);
    s3.write(t);
    s4.write(t);
    s5.write(t);
    delay(15);
  }
}
