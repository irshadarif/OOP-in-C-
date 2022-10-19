// englobj.cpp
// objects using English measurements
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance 
	{
	private:
//	protected:
//	public:
		int time,velacity,distance;
		
//	public:
//	protected:
	private:
	void get() //get length from user
	{
	cout << "\nEnter time: ";
	cin >>time;
	cout << "Enter velacity:";
	cin >> velacity;
	}
	void calculat()
	{
		distance=time*velacity;
	//	return distance;
	}
	void showdist() //display distance
	{
	 cout <<"distance is:"<< distance;
	}

	};
////////////////////////////////////////////////////////////////
int main()
{
	Distance dist; //define two lengths
	dist.get(); //get dist2 from user
	//display lengths
	dist.calculat();
	dist.showdist();
	cout << endl;
	return 0;
}
