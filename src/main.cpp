#include <Arduino.h>
// #include <Servo.h>
#include <SPI.h>
#include "serial.h"
#include "config.h"

#include "modules/barometer.h"
// #include "modules/old_servodrive.h"
#include "modules/servodrive.h"
#include "modules/accelerometer.h"

#include "parser/AsyncStream.h"
#include "parser/Parser.h"

void setup()
{
  Serial.begin(9600);
  serialSend(100, 1);

  // servo1.attach(PIN_SERVO);
  

  setup_bmp();
  setup_mpu();
  setup_servo();
}

void loop()
{
  servo.tick();
  // servo_write(read_potent()); // крутим серво в зависимости от значения потенциометра
  servo_write(read_potent());

  get_bmp_data(); // получаем данные с bmp180
}
