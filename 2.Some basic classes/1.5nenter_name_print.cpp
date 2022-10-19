// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
#include<string>
using namespace std;
////////////////////////////////////////////////////////////////
class name //define a class
	{
    // Access specifier 
    private:
		string name;	
  	public: 
	    // Member Functions() 
	    void printname() 
		    { 
	        cout << "you enter the name: " << name<<endl; 
	    	} 
	    void steName()
	    	{
	    	cout<<"enter your name:";
	    	getline(cin,name);
			}
	};
////////////////////////////////////////////////////////////////
int main()
	{
	// Declare an object of class geeks 
    name obj1;  
    // accessing data member 
    obj1.steName();
    obj1.printname(); 
    // accessing member function    
    return 0;
	}
