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
		int setdata() //member function to set data
			{
			cout<<"enter an int number:"<<"\t";
	 		cin>>somedata; 
			}
	 	void showdata() //member function to display data
			{ 
			cout << "you enter the number:"<<"\t" << somedata << endl; 
			}
	};

////////////////////////////////////////////////////////////////
int main()
	{
	smallobj s1, s2; //define two objects of class smallobj
	s1.setdata(); //call member function to set data
	s1.showdata(); //call member function to display data
	return 0;
	}
