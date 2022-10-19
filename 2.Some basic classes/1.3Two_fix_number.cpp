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
			cout << "Data is: " << somedata << endl; 
			}
	};
////////////////////////////////////////////////////////////////
int main()
	{
	smallobj s1, s2;
	s1.setdata(530); //call member function to set data
	s2.setdata(1776);
	s2.showdata(); //call member function to display data
	s1.showdata();
	return 0;
	}
