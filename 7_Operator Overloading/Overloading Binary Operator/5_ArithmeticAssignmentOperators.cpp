// englplus.cpp
// overloaded ‘+’ operator adds two Distances
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
	{
	private:
		int feet;
		float inches;
	public: //constructor (no args)
		Distance() : feet(0), inches(0.0)
			{ } //constructor (two args)
		Distance(int ft, float in) : feet(ft), inches(in)
			{ }
		void getdist() //get length from user
			{
			cout << "\nEnter feet: "; cin >> feet;
			cout << "Enter inches: "; cin >> inches;
			}
		void showdist() const //display distance
			{ cout << feet << "\' " << inches << "\""; }
		void operator += ( Distance ) ; //add 2 distances
	};
//--------------------------------------------------------------
//add this distance to d2
void Distance::operator += (Distance d2)  
	{
	feet += d2.feet; //add the feet
	inches += d2.inches; //add the inches
	if(inches >= 12.0) //if total exceeds 12.0,
		{ //then decrease inches
		inches -= 12.0; //by 12.0 and
		feet++; //increase feet by 1
		} //return a temporary Distance
	
	}
////////////////////////////////////////////////////////////////
int main()
	{
	Distance dist1, dist3, dist4; //define distances
	dist1.getdist(); //get dist1 from user
	Distance dist2(11, 6.25); //define, initialize dist2
	dist1 += dist2; //single ‘+’ operator
	//dist4 = dist1 + dist2 + dist3; //multiple ‘+’ operators
	//display all lengths
	cout << "dist2 ="; dist1.showdist(); cout << endl;
	cout<<"ater addition distance 1 will be:  "<<endl;
	cout << "dist1 ="; dist2.showdist(); cout << endl;
	return 0;
	}
