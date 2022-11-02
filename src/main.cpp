#include <Arduino.h>
#include <Servo.h>
#include <SPI.h>
#include "serial.h"
#include "config.h"

#include "modules/barometer.h"
#include "modules/servodrive.h"
// #include "modules/accelerometer.h"

#include "parser/AsyncStream.h"
#include "parser/Parser.h"

void setup()
{
  Serial.begin(9600);
  // serialSend(100, 1);

  // servo1.attach(PIN_SERVO);

  // setup_bmp();
}

void loop()
{
  // servo_write(read_potent()); // крутим серво в зависимости от значения потенциометра

  // get_bmp_data(); // получаем данные с bmp180
}
