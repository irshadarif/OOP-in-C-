// cardobj.cpp
// cards as objects
#include <iostream>
#include<conio.h>
using namespace std;
//////////////////////////////////////////////////////////////
enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11; //from 2 to 10 are
const int queen = 12; //integers without names
const int king = 13;
const int ace = 14;
////////////////////////////////////////////////////////////////
class card
	{
	private:
		int number; //2 to 10, jack, queen, king, ace
		Suit suit; //clubs, diamonds, hearts, spades
	public:
		card () //constructor (no args)
			{ }
			//constructor (two args)
		card (int n, Suit s) : number(n), suit(s)
			{ }
		void display(); //display card

	};
//--------------------------------------------------------------
void card::display() //display the card
	{
	if( number >= 2 && number <= 10 )
		cout << number << " of"<<"\t";
	else
		switch(number)
			{
			case jack: cout <<"jack of ";  break;
			case queen: cout << "queen of ";break;
			case king: cout << "king of ";break;
			case ace: cout << "ace of ";break;
			}
	switch(suit)
		{
		case clubs: cout << "clubs"<<"\t";break;
		case diamonds: cout << "diamonds"<<"\t";break;
		case hearts: cout << "hearts"<<"\t";break;
		case spades: cout << "spades"<<"\t" ;break;
		}
	}
//--------------------------------------------------------------

int main()
	{
	//card card1( 7, clubs ); //define & initialize card1
	card card1( ace, clubs );
	cout << "\nCard 1 is the ";
	card1.display(); //display card1

	cout << endl;
	return 0;
	}
