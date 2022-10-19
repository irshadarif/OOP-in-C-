// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class student //define a class
	{
    // Access specifier 
    private:
		string name;	
		int rol_no; 
  	public: 
    	// Member Functions() 
    	void set()
    		{
	    	cout<<"Dear student please enter your name:"<<"\t";
	    	getline(cin,name);
	    	cout<<"Dear student please enter your roll number:"<<"\t";
	    	cin>>rol_no;
			}
    	void print() 
	    	{ 
	    	cout << "your name is: " <<name<<endl;
			cout<<"your roll number is:"<<"\t"<<rol_no; 
	    	} 
	};
////////////////////////////////////////////////////////////////
int main()
	{
	// Declare an object of class geeks 
    student obj1;   
    obj1.set();
    obj1.print();
    return 0;
	}
