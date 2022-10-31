// counter.cpp
// object represents a counter variable
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
	{
	private:
		unsigned int count; //count
	public:
		Counter() : count(0) //constructor
			{ //cout<<"i'm constructor"<<endl; 
			}
		Counter(int c) : count(c) //constructor, one arg
			{ }
		Counter operator++() //increment count
			{ 
			++count; // increment count, then return
			return Counter(count);
			}
		int get_count() //return count
			{ return count; }
	//~Counter(){cout<<"i am dist"<<endl;}
	};
////////////////////////////////////////////////////////////////
int main()
	{
	Counter c1, c2; //define and initialize
	cout << "\nc1=" << c1.get_count(); //display
	cout << "\nc2=" << c2.get_count()<<endl;
	//++c1;
	c2=++c1; //increment and assignment of return type void
	
	cout << "\nc1=" << c1.get_count(); //display again
	cout << "\nc2=" << c2.get_count();
	cout << endl;
	return 0;
	}
