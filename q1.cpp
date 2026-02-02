/*1. Design a class named BoardMarker with the following attributes:
? Company (e.g., Dollar)
? Color (e.g., black, red)
? Refillable (Boolean – specifies if the marker can be refilled)
? Ink status (Boolean – indicates whether the ink is empty)
Implement appropriate getters and setters for these attributes. Additionally, include the
following methods:
? write() – This method should check if the ink is empty before allowing writing. If the
ink is empty, display a message indicating that writing is not possible; otherwise,
proceed with writing.
? refill() – This method should verify if the marker is refillable. If it is, refill the ink and
update the ink status; otherwise, display a message stating that the marker cannot be
refilled.
Demonstrate the functionality by creating 3 instances of BoardMarker, setting attribute values,
and calling the methods to test writing and refilling operations for each of the 3 markers.*/
#include<iostream>
using namespace std;
class Boardmarker
{
	private : 
	string company;
	string color;
	bool refillable;
	bool ink_status;
	public : 
	void setdata(string comp, string col, bool ref, bool ink)
	{
		company=comp;
		color=col;
		refillable=ref;
		ink_status=ink;
	}
	void getdata()
	{
		cout<<"company : "<<company<<endl;
		cout<<"color : "<<color<<endl;
		cout<<"refillable : "<<refillable<<endl;
		cout<<"ink status : "<<ink_status<<endl;
	}
	void write()
	{
		if(ink_status==true)
		{
			cout<<"Writing is not possible "<<endl;
		}
		else
		{
			cout<<"Proceed "<<endl;
		}
	}
	void refill()
	{
		if(refillable==true)
		{
			ink_status=false;
			cout<<"Ink refilled "<<endl;
		}
		else
		{
			cout<<"Marker can not be filled "<<endl;
		}
	}
};
int main()
{
	Boardmarker m1, m2, m3;
	m1.setdata("Dollar","blue",true,false);
	m2.setdata("Pikachu","black",true,true);
	m3.setdata("Asian","red",false,true);
	
	m1.getdata();
	m2.getdata();
	m3.getdata();
	cout<<"Marker 1 : "<<endl;
	m1.write();
	m1.refill();
	cout<<"Marker 2 : "<<endl;
	m2.write();
	m2.refill();
	cout<<"Marker 3 : "<<endl;
	m3.write();
	m3.refill();
	return 0;
}
