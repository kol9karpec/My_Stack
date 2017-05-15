#pragma once
#include <string>

enum TSuit {Heart, Diamond, Club, Spade};
extern const std::string TSuitVal[];
extern const std::string TSuitSymb[];

enum TValue {Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};
extern const std::string TValueVal[];
extern const std::string TValueSymb[];


class TPlayingCard
{
	TSuit suit;
	TValue value;
public:
	TPlayingCard() : suit((TSuit)0), value((TValue)0) {};
	TPlayingCard(TSuit suit, TValue value) : suit(suit), value(value) {};
	TPlayingCard(const TPlayingCard & obj);

	TSuit getSuit() { return suit; };
	TValue getValue() { return value; };

	void setSuit(TSuit suit);
	void setValue(TValue value);

	std::string print();
	std::string shortPrint();

	~TPlayingCard();
};

