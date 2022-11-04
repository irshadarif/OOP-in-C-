// staken.cpp
// overloading functions in base and derived classes
#include <iostream>
using namespace std;
#include <process.h> //for exit()
////////////////////////////////////////////////////////////////
class Stack
	{
		protected: //NOTE: can’t be private
			enum { MAX = 3 }; //size of stack array
			int st[MAX]; //stack: array of integers
			int top; //index to top of stack
		public:
			Stack() //constructor
				{ top = -1; }
			void push(int var) //put number on stack
				{ st[++top] = var; }
			int pop() //take number off stack
				{ return st[top--]; }
	};
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
int main()
	{
	Stack s1;
	s1.push(11); //push some values onto stack
	s1.push(22);
	s1.push(33);
//	s1.push(44);
	cout << endl << s1.pop(); //pop some values from stack
	cout << endl << s1.pop();
	cout << endl << s1.pop();
//	cout << endl << s1.pop(); //oops, popped one too many...
	cout << endl;
	return 0;
	}
