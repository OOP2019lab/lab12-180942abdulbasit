#include "180942_rectangle.h"


rectangle::rectangle(void)
{
}


rectangle::~rectangle(void)
{
	cout<< "~Rectangle()"<<endl;
}

rectangle::rectangle(float he,float wi,string co):h(he), w(wi), shape(co)
{

}

float rectangle::area()
{
	return h*w;
}
