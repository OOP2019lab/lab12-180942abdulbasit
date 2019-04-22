#include "180942_shape.h"
#include "180942_circle.h"
#include "180942_rectangle.h"
#include "180942_triangle.h"
#include <conio.h>
using namespace std;

float sumArea(shape*, shape*);
int main()
{

	string data;

	////// Exercise 1//////////
	triangle t1(1.0,9.0,"Red");
	circle c1(2,"Blue");
	rectangle r1(6,2,"Orange");
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;
	shape *sptr=&t1;
	shape &sref=r1;
	cout<<sptr->area()<<endl;
	cout<<sptr->color<<endl;
	cout<<sref.color<<endl;
	cout<<sref.area()<<endl;

	///////////// Exercise 3///////////
	shape s1("Purple");

	cout<<sumArea(&t1, &c1)<<endl;
	cout<<sumArea(&s1, &r1)<<endl;
	cout<<sumArea(&s1, &t1)<<endl;



	int c= 5;
	shape **shapesArray=new shape*[c]();

	for (int i=0;i<c;)
	{
		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		switch (_getch())
		{

		case '1':
			float base, height;
			cout << "Enter base and height";
			cin >> base >> height;
			cin.ignore();
			cout << "Enter Color";

			getline(cin, data);

			shapesArray[i] = new triangle(base, height, data);
			i++;
			break;
		case '2':

			float width, length;
			cout << "Enter height and width ---> ";
			cin >> length >> width;

			cin.ignore();
			cout << "Enter Color ----> ";
			getline(cin, data);

			shapesArray[i] = new rectangle(length, width, data);
			i++;
			break;

		case '3':


			float rad;
			cout << "Enter radius";
			cin >> rad;

			cin.ignore();
			cout << "Enter Color ";
			getline(cin,data);

			shapesArray[i] = new circle(rad, data);
			i++;
			break;

		default:
			cout <<"Enter again."<< endl<<endl;
			break;
		}

	}


	for (int i = 0; i < c; i++)
	{
		if (shapesArray[i] != nullptr)
			cout << shapesArray[i]->area() << endl;
	}

	for (int i = 0; i < c; i++)
	{
		if (shapesArray[i] != nullptr)
			delete shapesArray[i];
	}
	delete[]shapesArray;

	shape *s2 = new triangle(1.0, 9.0, "Red");
	delete s2; 

	return 0;
}

float sumArea(shape *a, shape *b)
{
	return a->area() + b->area();

}