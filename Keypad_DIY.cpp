#include "Arduino.h"
#include "Keypad_DIY.h"
Keypad_DIY::Keypad_DIY(int pin)
{
  pinMode(pin,INPUT);
  _pin=pin;
}

int Keypad_DIY::getmaxReference()
{
  int maxref=200;
  return maxref;
}

int Keypad_DIY::getminReference()
{
  int minref=150;
  return minref;
}


char Keypad_DIY::getNumber(int values)
{
    if(values>=239 && values<=242)
    {
      char n1='1';
      return n1;
    }
    if(values>=244 && values<=247)
    {
      char n2='2';
      return n2;
    }
    if(values>=252 && values<=258)
    {
      char n3='3';
      return n3;
    }
    if(values>=314 && values<=318)
    {
      char n4='4';
      return n4;
    }
    if(values>=324 && values<=328)
    {
      char n5='5';
      return n5;
    }
    if(values>=334 && values<=339)
    {
      char n6='6';
      return n6;
    }
    if(values>=458 && values<=467)
    {
      char n7='7';
      return n7;
    }
    if(values>=480 && values<=485)
    {
      char n8='8';
      return n8;
    }
    if(values>=500 && values<=513)
    {
      char n9='9';
      return n9;
    }
    if(values>=848 && values<=856)
    {
      char n10='*';
      return n10;
    }
    if(values>=928 && values<=933)
    {
      char n11='0';
      return n11;
    }
    if(values>=1010)
    {
      char  n12='#';
      return n12;
    }
    else
    {
      return 0;
    }
  }
