// newintro.cpp
// introduces operator new
#include <iostream>
#include <cstring> //for strlen
using namespace std;
int main()
	{
	int *p = NULL; 
	//cout << "Value of p: " << *p << endl; 
	p = new int;
	*p = 29; 
	cout << "Value of p: " << *p << endl; 
	// freed the allocated memory 
	delete p; 
	cout << "Value of p: " << *p << endl; 
	return 0;
	}
