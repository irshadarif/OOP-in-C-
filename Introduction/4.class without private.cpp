#include<iostream>
using namespace std;

////////////////////////////////////////////////////////
class Test// class name test
{
    // the data member without private is also consider private by default
        int data1;
        float data2;  
        
    public:  // two data function
        void function1()
        {   data1 = 2;  } 
        float function2()
        { 
            data2 = 3.5;
            return data2;
        }
};
int main()
{
	Test a;
	cout<<"enter data1:"<<endl;
	cin>>a.data1;	
}
