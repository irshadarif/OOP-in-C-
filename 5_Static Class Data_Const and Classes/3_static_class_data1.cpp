// statdata.cpp
// static class data
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class foo
	{
	private:
		static int count; //only one data item for all objects
		//note: “declaration” only!
	public:
		foo() //increments count when object created
		{ count++; }
		int getcount() //returns count
		{ return count; }
		void incr_count()
		{
		count=count+3;
		}
	};
//--------------------------------------------------------------
int foo::count = 0; //*definition* of count
////////////////////////////////////////////////////////////////
int main()
	{
	foo f1, f2; //create three objects
	cout << "count is: " << f1.getcount() << endl; //each object
	cout << "count is: " << f2.getcount() << endl;
	f2.incr_count();
	cout << "count is: " << f1.getcount() << endl; //each object
	cout << "count is: " << f2.getcount() << endl; //sees the
	return 0;
	}
