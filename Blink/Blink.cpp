#include <Blink.h>

Blink::Blink(byte Pin, uint64_t Time){
	pin = Pin;
	time = Time;
}
void Blink::tick(){
	if(millis() - tmr => time){
		status = !status;
		digitalWrite(pin, status);
	}
}
void Blink::setPin(byte Pin){
	pin = Pin;
}
void Blink::setTimer(uint64_t Time){
	time = Time;
}