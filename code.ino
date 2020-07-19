#include <Servo.h>

int positiion = 0;

int i = 0;

Servo servo;
Servo servo_1;


void setup()
{
  servo.attach(3);
  servo_1.attach(5);

}

void loop()
{
  positiion = 0;
  for (positiion = 1; positiion <= 179; positiion += 1) {
    servo.write(positiion);
    servo_1.write(179-positiion);
    delay(15); 
  }
  for (positiion = 179; positiion >= 1; positiion -= 1) {
   servo.write(positiion);
    servo_1.write(179-positiion);
    delay(15); 
  }
}
