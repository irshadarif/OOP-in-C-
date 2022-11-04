// ptrnote.cpp
// array accessed with pointer notation
#include <iostream>
using namespace std;
int main()
	{
	int* ptr;
	int intarray[5] = { 31, 54, 77, 52, 93 };
	for(int j=0; j<5; j++) //for each element,
		cout << *(intarray++) << endl;
	
	ptr=intarray;
	for(int j=0; j<5; j++) //for each element,
	cout << *(ptr++) << endl; //print value
	return 0;
	}
