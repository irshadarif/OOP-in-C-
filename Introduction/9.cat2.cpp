// Demonstrates declaration of a class and
 // definition of an object of the class,

 #include <iostream> // for cout
 using namespace std;

 class Cat // declare the class object
 	{
	private:// members which follow are public
	 	int itsAge;
	 	int itsWeight;
	public:
		void setAge()
			{
			cout<<"enter age:"<<"\t";
			cin>>itsAge;
			}
		void printAge()
			{
		 	cout<<"age is:"<<itsAge<<endl;
		 	cout<<endl; 
		 	}
		void setWeight()
	 		{
	 		cout<<"enter weight:"<<endl;
	 		cin>>itsWeight;
			}
		void printweight()
			{
		 	cout<<"weoght is:"<<"\t"<<itsWeight<<endl;
			}	
	};
int  main()
	{
	 Cat Frisky, bublee;
	 Frisky.setAge(); // assign to the member variable
	 Frisky.printAge();
	 
	 Frisky.setWeight();
	 Frisky.printweight();
	 cout<< "Bublee"<<endl;
	 bublee.setAge();
	 bublee.printAge();
	 return 0;
	}
