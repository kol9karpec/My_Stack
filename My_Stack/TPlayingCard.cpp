#include "TPlayingCard.h"

const std::string TSuitVal[] = { "Heart","Diamond","Club","Spade" };
const std::string TSuitSymb[] = {"\3","\4","\5","\6"};
const std::string TValueVal[] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace" };
const std::string TValueSymb[] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

TPlayingCard::TPlayingCard(const TPlayingCard & obj)
{
	suit = obj.suit;
	value = obj.value;
}

void TPlayingCard::setSuit(TSuit suit)
{
	if (this->suit == suit) throw("This suit is already setted!");
	else this->suit = suit;
}

void TPlayingCard::setValue(TValue value)
{
	if (this->value == value) throw("This card value is already setted!");
	else this->value = value;
}

std::string TPlayingCard::print()
{
	return TValueVal[value] + " of " + TSuitVal[suit];
}

std::string TPlayingCard::shortPrint()
{
	return TSuitSymb[suit] + TValueSymb[value];
}

TPlayingCard::~TPlayingCard()
{

}
