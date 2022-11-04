// passarr.cpp
// array passed by pointer
#include <iostream>
using namespace std;
const int MAX = 5; //number of array elements
int main()
{
	int a[]={1,2,3,4,5},*s=a,d=5;
	*++s=10;
	cout<<*s<<endl;
	cout<<*(s-1)<<endl;
	

return 0;
}

