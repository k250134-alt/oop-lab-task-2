/*3. Create a class called water bottle. The water bottle has a company (made by), color and water
capacity. The water capacity isstored in both liters(l) and milliliters(ml). Create variables and
methods for your class. Methods should include getters and setters. Also create an additional
method that updates the water capacity (both in l and ml) after asking user how much water a
person has drank. Assume that the user always enters the amount in ml. Demonstrate the
functionality of the water bottle in your main method.*/
#include<iostream>
using namespace std;
class water_bottle
{
	private : 
	string company;
	string color;
	float water_in_l;
	float water_in_ml;
	public : 
	void setdata(string c, string col,float l)
	{
		company=c;
		color=col;
		water_in_l=l;
		water_in_ml=l*1000;
	}
	void getdata()
	{
		cout<<"Company : "<<company<<endl;
		cout<<"Color : "<<color<<endl;
		cout<<"Capacity : "<<endl<<water_in_l<<" L"<<endl<<water_in_ml<<" ml"<<endl;
		
	}
	void drink()
	{
		double drunk;
		cout<<"Enter the water you have drunk in ml"<<endl;
		cin>>drunk;
		water_in_ml-=drunk;
		water_in_l=water_in_ml/1000;
	}
};
int main()
{
	water_bottle w;
	w.setdata("Asian","Black",2.5);
	w.getdata();
	w.drink();
	w.getdata();
}
