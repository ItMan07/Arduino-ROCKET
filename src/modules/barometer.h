#include <Wire.h>
#include <Adafruit_BMP085.h>
// #include "serial.h"
#define seaLevelPressure_hPa 1013.25

Adafruit_BMP085 bmp;

void setup_bmp()
{
    if (!bmp.begin())
    {
        Serial.println("Ошибка подключения BMP180!");
    }
}

void get_bmp_data()
{
    // Serial.print("Температура = ");
    // Serial.print(bmp.readTemperature());
    // Serial.println(" *C");
    
    serialSend(1, bmp.readTemperature()); // temperature

    // Serial.print("Давление = ");
    // Serial.print(bmp.readPressure());
    // Serial.println(" Pa");

    serialSend(2, bmp.readPressure()); // pressure

    // Serial.print("Высота = ");
    // Serial.print(bmp.readAltitude());
    // Serial.println(" м");

    serialSend(3, bmp.readAltitude()); // altitude

    // Serial.println();
    delay(500);
}