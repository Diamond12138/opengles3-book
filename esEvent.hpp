#ifndef ESEVENT_HPP_
#define ESEVENT_HPP_
#include <android/input.h>

class ESEvent
{
	public:
	AInputEvent * event;
	public:
	int getX(int);
	int getY(int);
	int getType();
};

int ESEvent::getX(int n)
{
	return AMotionEvent_getX(event,n);
}
int ESEvent::getY(int n)
{
	return AMotionEvent_getY(event,n);
}
int ESEvent::getType()
{
	return AInputEvent_getType(event);
}

#endif