#ifndef Keypad_DIY_h
#define Keypad_DIY_h
#include "Arduino.h"
class Keypad_DIY
{
 public:
  Keypad_DIY(int pin);
  int getmaxReference();
  int getminReference();
  char getNumber(int state);
private:
  int _pin;
  bool isDigit;
};
#endif
