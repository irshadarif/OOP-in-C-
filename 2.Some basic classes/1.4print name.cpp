// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class yourname //define a class
	{
	private: 
    // Access specifier 
	public: 
    	string name; 
    	void printname() 
			{ 
			cout << "student name is: " << name; 
	    	}	 

	};
////////////////////////////////////////////////////////////////
int main()
	{
    yourname obj1; 
    obj1.name = "Farman"; 
    obj1.printname(); 
    return 0;
	}
