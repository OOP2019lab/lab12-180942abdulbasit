#include "180942_shape.h"

shape::shape()
{

}

shape::shape(const shape&)
{

}

shape::shape(string c):color(c)
{

}


shape::~shape()
{
	cout<<"~shape()"<<endl;
}