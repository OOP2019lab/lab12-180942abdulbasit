#pragma once
#include "180942_shape.h"

class triangle:public shape
{
private:
	float h;
	float b;

public:
	triangle::triangle(void);
	triangle::~triangle(void);
	triangle::triangle(float,float,string);

	float triangle::area();

};

