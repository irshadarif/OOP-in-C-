// ref.cpp
// demonstrates passing by reference
#include <iostream>
using namespace std;
int main()
	{
	void f(float& b); //declaration
	float n=2;
	cout<<"main: "<<n<<endl;
	f(n);
	return 0;
	}
void f( float& b)
	{
	cout<<b;
	}
