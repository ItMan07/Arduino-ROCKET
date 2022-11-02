// #include <Arduino.h>
// #include "config.h"

// #define LOG 0

void serialSend(int a, int b)
{ // ФУНКЦИЯ ОТПРАВКИ ДАННЫХ НА КОМПЬЮТЕР
  Serial.print(a);
  Serial.print(',');
  Serial.print(b);
  Serial.print(';');
}

// void serialLog(String str)
// {
//   if (LOG)
//     Serial.print(str);
// }

// void serialLogln(String str1)
// {
//   if (LOG)
//     Serial.println(str1);
// }
