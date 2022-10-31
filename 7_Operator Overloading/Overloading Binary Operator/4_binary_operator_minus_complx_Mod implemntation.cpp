// englplus.cpp
// overloaded ‘+’ operator adds two Distances
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class comlex //English Distance class
	{
	private:
		int real;
		float imag;
	public: //constructor (no args)
		comlex() : real(0), imag(0.0)
			{ } //constructor (two args)
		comlex(int r, float im) : real(r), imag(im)
			{ }
		void get() //get length from user
			{
			cout << "\nEnter real part: "; cin >> real;
			cout << "Enter imagnary part: "; cin >> imag;
			}
		void show() const //display distance
			{ cout << real << " +j" << imag ; }
		comlex operator -(comlex ) const; //add 2 distances
	};
//--------------------------------------------------------------
//add this distance to d2
comlex comlex::operator - (comlex d2) const //return sum
	{
	int f = real - d2.real; //add the feet
	float i = imag - d2.imag; //add the inches
	return comlex(f,i); //initialized to sum
	}
////////////////////////////////////////////////////////////////
int main()
	{
	comlex c1, c3, c2; //define distances
	cout<<"enter first number = "<<endl;
	c1.get(); //get dist1 from user 
	cout<<"enter second number = "<<endl;
	c2.get();
	cout<<endl;
	c3 = c1 - c2; //single ‘+’ operator
	//dist4 = dist1 + dist2 + dist3; //multiple ‘+’ operators
	//display all lengths
	cout << "first number ="; c1.show(); cout << endl;
	cout << "second number ="; c2.show(); cout << endl;
	cout << "sum of both number is ="; c3.show(); cout << endl;
	//cout << "dist4 ="; dist4.showdist(); cout << endl;
	return 0;
	}
