#include "Deck.h"
#include <string>
#include <iostream>


Deck::Deck() {
	//Constructor
	cardRank = 0; 
}

Deck::~Deck() {
	//Destructor
}
void Deck::getRank() {
	std::cout << cardRank;
}
void Deck::getSuitName() {
	std::cout << suitName;
}
std::string Deck::setSuitName(std::string name) {

	return suitName = name; 
}
int Deck::setCardRank(int r) {

	return cardRank = r;
}
void Deck::displayCard() {
	//getNameCards(); <-- ran into issue where the value and the memory address was printed. 
	getRank(); std::cout << " of "; 
	getSuitName();
}

void Deck::displayCard_() { // this function is used for the string value for card 9+ and 1(Ace) 
	getNameCards(); std::cout << " of ";
	getSuitName();
}

std::string Deck::setNameCards(std::string cardName) {
	return namedCards = cardName; 
}
void Deck::getNameCards() {
	std::cout << namedCards;
}

void Deck::displayDeck() {
	std::string cards[13] = { "A","J","K","1","2","3","4","5","6","7","8","9","10" };//initializing cards available under one sign
	std::string sign[4] = { "heart", "diamond","ace", "spade" };//total number of signs

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++){
			std::cout << sign[i] << " ";
			std::cout << cards[j] << std::endl;
		}
	}
}
/*
void Deck::outputDisplay() {
	int rank;
	std::string suit;
	std::string rankName;
	std::cout << "Deck of Cards:\n";
	std::cout << "Here is a Deck of cards:\n";
	//newDeck.displayDeck(); <-- old implementation 
	std::cout << "Is your desired card Suit numbered or not? (Y/N)\n";
	std::cout << "What is your card Suit? \n";
	std::cin >> suit;
	std::cout << "Is your desired card Rank numbered or not? (Y/N)\n";
	char answer;
	std::cin >> answer;
	if (answer == 'Y' || answer == 'y') {
		std::cout << "What is your card Rank? \n";
		std::cin >> rankName;
		newDeck.setNameCards(rankName);
	}
	else {
		std::cout << "What is your card Rank? \n";
		std::cin >> rank;
		newDeck.setCardRank(rank);
	}
	newDeck.setSuitName(suit);
	std::cout << "You chose \n";
	newDeck.displayCard();
}
*/