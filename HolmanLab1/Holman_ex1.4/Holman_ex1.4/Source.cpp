/*
Lab 1.4
Ben Holman 
First Edit: 9/2/2022
Last Edit: 9/8/2022 
*/

#include <iostream>
#include <string>
#include "Deck.h"

//TODO
// function instead of all these cout/cin lines
// tried that -- did not work or I just didn't do it correct. 

int main() {
	
	Deck newDeck;
	
	int rank;
	std::string suit;
	std::string rankName; 
	std::cout << "Deck of Cards:\n"; 
	std::cout << "Here is a Deck of cards:\n"; 
	newDeck.displayDeck(); 
	//std::cout << "Is your desired card Suit numbered or not? (Y/N)\n";
	std::cout << "What is your card Suit? \n";
	std::cin >> suit;
	newDeck.setSuitName(suit);
	std::cout << "Is your desired card Rank numbered or not? (Y/N)\n";
	char answer;
	std::cin >> answer;
	// finds out which cardDisplay() functions needs to print
	if (answer == 'Y' || answer == 'y') {
		std::cout << "What is your card Rank? \n";
		std::cin >> rankName;
		newDeck.setNameCards(rankName);
		newDeck.displayCard_();
	}
	else {
		std::cout << "What is your card Rank? \n";
		std::cin >> rank;
		if (rank < 2 || rank > 9) {
			std::cout << "Card Rank out of bounds, try again.";
		}
		else {
			newDeck.setCardRank(rank);
		}
		std::cout << "\n"; 
		newDeck.displayCard();
	}
	
	//newDeck.outputDisplay();
	//newDeck.setNameCards(rankName); 
	//newDeck.setCardRank(rank); 
	
	return 0; 
}

// TEST CASES 
/*
* TEST 1: 
* suit == Spades 
* answer == Y || y
* rankName == Queen 
* OUTPUT: Queen of Spades 
* 
* TEST 2:
* suit == hearts
* answer == N || n
* rank == any number 2 - 9
* OUTPUT: 2 of hearts
* 
* DOES NOT ACCOUNT FOR: 
* user input anything that is below 2 or above 9.
* EDIT: It does account for this now, and will show the initialized value for the cardRank Int as 0. 
*/