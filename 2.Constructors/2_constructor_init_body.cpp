// counter.cpp
// object represents a counter variable
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
//in this class a constructor created for auto ini
//the constructor is define and counter is initialize in the body of constructor
class Counter
	{
	private:
		unsigned int  count; //count
	public:
		Counter()// initilaztion ftn
			{ 
			count=10;	
			}	
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
	cout << "\n after define object c1=" << c1.get_count(); 
	c1.inc_count(); //increment c1
	cout << "\n after incrementing c1=" << c1.get_count(); //display again
	cout << endl;
	return 0;
	}
