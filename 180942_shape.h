#pragma once
#include <string>
#include <iostream>
using namespace std;

class shape
{
protected:
	string type;
	
public:
	string color;
	shape::shape();
	shape::shape(const shape&);
	shape::shape(string);

	virtual float area();
	virtual shape::~shape();

};