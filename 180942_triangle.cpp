#include "180942_triangle.h"


triangle::triangle(void)
{
}


triangle::~triangle(void)
{
	cout<<"~Triangle()"<<endl;
}

triangle::triangle(float B, float H, string C) : b(B), h(H), shape(C)
{
}

float triangle::area()
{
	return (0.5*b*h);
}