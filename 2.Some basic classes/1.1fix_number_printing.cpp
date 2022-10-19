// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class smallobj //define a class
	{
	private:
		int somedata; //class data
	public:
		void setdata(int d) //member function to set data
		{
		somedata = d;
		}
		void showdata() //member function to display data
		{ 
		cout << "Data is:" << somedata << endl;
		}
	};
////////////////////////////////////////////////////////////////
int main()
	{
	smallobj s1; //define two objects of class smallobj
	
	s1.setdata(99); //call member function to set data
	
	s1.showdata(); //call member function to display data
	
	return 0;
	}
