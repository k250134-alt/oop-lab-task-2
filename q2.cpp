/*2. Create a Circle class with the following member variables: radius, a double representing the
circle’s radius, and pi, a double initialized with the value 3.14159. The class should include
the following member functions: setRadius(), a mutator function to set the radius; getRadius(),
an accessor function to retrieve the radius; getArea(), which returns the area of the circle using
the formula area = pi * radius * radius; getDiameter(), which calculates and returns the
diameter using diameter = radius * 2; and getCircumference(), which calculates and returns
the circumference using circumference = 2 * pi * radius. Write a program that demonstrates
the Circle class by prompting the user to input a radius, creating a Circle object, and displaying
the calculated area, diameter, and circumference.*/
#include<iostream>
using namespace std;
class Circle
{
	private : 
	double radius;
	double pi;
	public :
		void setdata(double r, double p)
		{
			radius=r;
			pi=p;
		}
		double getradius()
		{
			return radius;
		}
		double getArea()
		{
			return pi*radius*radius;
		}
		double getDiameter()
		{
			return radius*2;
		}
		double getcircumference()
		{
			return 2*pi*radius;
		}
};
int main()
{
	Circle c;
	c.setdata(5.00,3.142);

	cout<<"Radius : "<<	c.getradius()<<endl;
	cout<<"Area : "<<c.getArea()<<endl;
	cout<<"Diameter : "<<c.getDiameter()<<endl;
	cout<<"Circumference : "<<	c.getcircumference()<<endl;
	return 0;
	
}
