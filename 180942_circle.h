#pragma once
#include "180942_shape.h"

class circle:public shape
{
private:
	float r;
public:
	circle::circle(void);
	circle::~circle(void);
	circle::circle(float,string);

	float circle::area();
};

