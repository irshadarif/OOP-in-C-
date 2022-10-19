// englobj.cpp
// objects using English measurements
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
	{
	private:
		int feet;
		float inches;
	public:
		void setdist() //get length from user
		{
		cout << "\nEnter feet: "; cin >> feet;
		cout << "Enter inches:"; cin >> inches;
		}
		void showdist() //display distance
		{
		 cout << feet << "\' " << inches << "\"";
		}

	};
////////////////////////////////////////////////////////////////
int main()
	{
	Distance dist2; //define two lengths
	
	dist2.setdist(); //get dist2 from user
	//display lengths
	cout << "\ndist2 ="; dist2.showdist();
	cout << endl;
	return 0;
	}
