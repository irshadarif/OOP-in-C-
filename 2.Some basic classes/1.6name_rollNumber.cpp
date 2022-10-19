// smallobj.cpp
// demonstrates a small, simple object
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class yourname //define a class
	{
    // Access specifier 
    private:
		string name;	
		int rol_no; 
  	public: 
    // Member Functions() 
	    void printname() 
		    { 
		    cout << "student name is: " <<name<<endl; 
		    } 
	    void steName()
		    {
		    cout<<"Dear student please enter your name:"<<"\t";
		    getline(cin,name);
			}
	    int set_rolNo()
		    { 
		    cout<<"Dear student please enter your roll number:"<<"\t";
		    cin>>rol_no;
			}
		void print_rolNo()
			{
			cout<<"your roll number is:"<<"\t"<<rol_no;
			}
	};
////////////////////////////////////////////////////////////////
int main()
	{
	// Declare an object of class geeks 
    yourname obj1; 
    
    obj1.steName();
    
    
    obj1.set_rolNo();
    obj1.printname(); 
    obj1.print_rolNo();
    return 0;
	}
