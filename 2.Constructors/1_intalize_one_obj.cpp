// counter.cpp
// object represents a counter variable
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
//this class is created for a counter
// the count variable is initialize by using a seprate member function for initilization

class Counter
	{
	private:
	 	unsigned int count; //count
	public:
	 	void initalize_count()// initilaztion ftn
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
	cout << "\n before initilization c1=" << c1.get_count();
	c1.initalize_count(); //increment c1
	cout << "\n before incrementing c1=" << c1.get_count(); //display again
	c1.inc_count(); //increment c1
	cout << "\n after incrementing c1=" << c1.get_count(); //display again
	cout << endl;
	return 0;
	}
