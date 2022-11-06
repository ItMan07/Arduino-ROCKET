#include "ServoSmooth.h"

int max_angle = 180;

ServoSmooth servo;
// ServoSmooth servo(max_angle);

void setup_servo()
{
    servo.attach(PIN_SERVO);
    servo.setSpeed(180);
    servo.setAccel(0.5);
}

void servo_write(byte angle)
{
    servo.setTargetDeg(angle);

    serialSend(4, angle);
}

byte read_potent()
{
    static int val = 0;
    static int last_val = 0;

    val = analogRead(A5);
    val = map(val, 0, 1023, 0, 180);

    if ((val > last_val && val - last_val >= 2) || (val < last_val && last_val - val >= 2))
    {
        last_val = val;
        return val;
    }
}
