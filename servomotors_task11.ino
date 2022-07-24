#include<Servo.h>
int servosignal = 3;
Servo servos;
void setup()
{
  servos.attach(servosignal);
}

void loop()
{
  servos.write(90);
  delay(1000);
  servos.write(180);
  delay(1000);
}