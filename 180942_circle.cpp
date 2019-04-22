#include "180942_circle.h"


circle::circle(void)
{
}


circle::~circle(void)
{
	cout<<"~Circle()"<<endl;
}

circle::circle(float R, string C) : r(R), shape(C)
{

}

float circle::area()
{
	return (3.142*r*r);
}
