
#include<iostream> 
using namespace std; 
  
class Test { 
    int value; 
public: 
    Test(int v ) {value = v;} 
    void constf() const
    {
  //  	value=value+5;
	}
	void NONconstf()
    {
    	value=value+5;
	}
	
      
    // We get compiler error if we add a line like "value = 100;" 
    // in this function. 
    int getValue() const {return value;}   
}; 
  
int main() { 
    Test t(2); //non const object
 //   t.constf();
	t.NONconstf();
    cout<<t.getValue(); 
    return 0; 
}
