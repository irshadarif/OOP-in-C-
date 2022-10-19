// englobj.cpp
// objects using English measurements
//////////////just to print the distances
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance //English Distance class
	{
	private:
		int feet;
		float inches;
	public:
		void setdist(int ft, float in) //set Distance to args
			{
			 feet = ft;
			 inches = in; 
			}
		void showdist() //display distance
			{
			cout << feet << "\' " << inches << "\"";
			}

	};
////////////////////////////////////////////////////////////////
int main()
{
	Distance dist1; //define two lengths
	dist1.setdist(11, 6.25); //set dist1
	
	//display lengths
	cout << "\ndist1 = "; 
	dist1.showdist();
	
	cout << endl;
	return 0;
}
