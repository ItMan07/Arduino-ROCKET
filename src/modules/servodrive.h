// #include "config.h"

Servo servo1;

void servo_write(byte angle)
{
  servo1.write(angle);
  // delay(delay_time);

  serialSend(4, angle); // отправляем на комп
}

byte read_potent()
{
  static int val = 0;
  static int last_val = 0;
  
  val = analogRead(A5);
  val = map(val, 0, 1023, 0, 179);

  if ((val > last_val && val - last_val >= 2) || (val < last_val && last_val - val >= 2))
  {
    last_val = val;
    return val;
  }
}