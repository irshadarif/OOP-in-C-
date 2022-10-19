// counter.cpp
// object represents a counter variable
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
//in this class a constructor created for auto ini
//the constructor is define and counter is initialize in the body of constructor
//here data member is const
class Counter
	{
	private:
		int  count; //count
	public:
		Counter():count(10)// initilaztion ftn
			{ 	}	
		void inc_count() //increment count
			{ 
			count++; 
			}
		int get_count() //return count
			{ 
			return count; 
			}
	};
////////////////////////////////////////////////////////////////
int main()
{
	Counter c1; //define and initialize
	
	c1.inc_count(); //increment c1
	cout << "\nc1=" << c1.get_count(); //display again
	cout << endl;
	return 0;
}
