#pragma once
#include <Arduino.h>

class Blink{
  public:
	Blink(byte Pin, uint64_t Time);
	void tick();
	void setPin(byte Pin)
	void setTimer(uint64_t Time);
  private:
	uint64_t time;
	byte pin;
	bool status;
	uint64_t tmr;
}