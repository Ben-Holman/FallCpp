#pragma once

//TODO 

// make a varible for Ace, Jack, King, Queen 

#include <string>

class Deck
{
public:
	Deck(); // Constructor 
	~Deck(); // Destructor 
	void getRank(); // retrieves rank of card
	void getSuitName(); // retrieves suit of card
	std::string setSuitName(std::string name); // sets the suit name from the user
	int setCardRank(int r); // sets the rank from the user
	std::string setNameCards(std::string cardName); // sets the cards above 9 
	void getNameCards(); // returns the value from 'setNameCards' 
	void displayCard(); // displays the card that the user specified 
	void displayCard_(); // displays the card info that the user specified with 'getNameCards()' 
	void displayDeck(); // displays all the cards in the deck
	void outputDisplay();
private:
	std::string suitName; // variable containing the string value for the suit name 
	int cardRank; // variable containing the integer value for cards ranked 2 - 9.
	std::string namedCards; // variable containing the string value for cards rank Jack, King, Queen, Ace
};
