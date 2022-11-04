// arrnote.cpp
// array accessed with array notation
#include <iostream>
using namespace std;
int main()
	{ //array
	int intarray[5] = { 31, 54, 77, 52, 93 };
	int* ary;
	ary=&intarray[0];
	cout << intarray[0] << endl; 
	cout << *ary << endl; 
	cout << *intarray << endl; 
	return 0;
	}
