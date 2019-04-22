#pragma once
#include "180942_shape.h"

class rectangle:public shape
{
private: 
	float w;
	float h;
public:
	rectangle::rectangle(void);
	rectangle::~rectangle(void);
	rectangle::rectangle(float,float,string);

	float rectangle::area();

};

