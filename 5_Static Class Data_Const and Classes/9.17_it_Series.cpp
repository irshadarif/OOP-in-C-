#include<iostream>
#include<conio.h>
using namespace std;
void fun();
main()
{
	int i;
	for (i=1; i<=5; i++)
	{
		fun();

	}
	
}
void fun()
{
	static int n=0;
//	int n=0;
	n++;
	cout<<"value of n= "<<n<<endl;
}
