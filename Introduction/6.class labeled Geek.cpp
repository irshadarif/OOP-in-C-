// C++ program to demonstrate  
// accessing of data members  
//https://www.geeksforgeeks.org/c-classes-and-objects/
  
#include<iostream>
using namespace std;
class Geeks 
	{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string geekname; 
  
    // Member Functions() 
    void printname() 
    { 
    cout << "Geekname is: " << geekname<<endl; 
    } 
	}; 
  
int main() 
	{ 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.geekname = "kashif"; 
  
    // accessing member function 
    obj1.printname(); 
    cout<<"Very good"<<obj1.geekname;
    return 0; 
	} 
