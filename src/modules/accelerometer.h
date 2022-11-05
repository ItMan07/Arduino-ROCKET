#include "MPU6050.h"
MPU6050 mpu;

void setup_mpu()
{
    Wire.begin();
    mpu.initialize();
    // состояние соединения
    Serial.println(mpu.testConnection() ? "MPU6050 OK" : "MPU6050 FAIL");
    delay(1000);
}

int16_t getRotationX();
int16_t getRotationY();
int16_t getRotationZ();
void getRotation(int16_t *x, int16_t *y, int16_t *z);

int16_t getAccelerationX();
int16_t getAccelerationY();
int16_t getAccelerationZ();
void getAcceleration(int16_t *x, int16_t *y, int16_t *z);