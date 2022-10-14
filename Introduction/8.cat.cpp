// Demonstrates declaration of a class and
 // definition of an object of the class,

 #include <iostream> // for cout
 using namespace std;

 class Cat // declare the class object
	{
	public: // members which follow are public
		int itsAge;
		int itsWeight;
	};


int main()
	{
	Cat Frisky;
	Frisky.itsAge = 5; // assign to the member variable
	cout << "Frisky is a cat who is " ;
	cout << Frisky.itsAge << " years old.\n";
	}
