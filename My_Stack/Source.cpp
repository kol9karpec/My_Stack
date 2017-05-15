#include <iostream>
#include <vector>

#include "TStack.h"
#include "TPlayingCard.h"

using namespace std;

int main()
{
	TPlayingCard myCard(TSuit::Heart, TValue::Queen);

	cout << myCard.print() << endl;
	cout << myCard.shortPrint() << endl;

	TStack<TPlayingCard, std::vector<TPlayingCard>> my_stack;

	my_stack.push(TPlayingCard(TSuit::Heart, TValue::Queen));
	my_stack.push(TPlayingCard(TSuit::Spade, TValue::Two));
	my_stack.push(TPlayingCard(TSuit::Diamond, TValue::Three));
	my_stack.push(TPlayingCard(TSuit::Spade, TValue::Ace));
	my_stack.push(TPlayingCard(TSuit::Diamond, TValue::Queen));
	my_stack.push(TPlayingCard(TSuit::Heart, TValue::King));
	my_stack.push(TPlayingCard(TSuit::Spade, TValue::Ten));
	my_stack.push(TPlayingCard(TSuit::Club, TValue::Ace));
	my_stack.push(TPlayingCard(TSuit::Diamond, TValue::Jack));

	int size = my_stack.size();
	for (int i = 0; i < size; i++)
	{
		cout << my_stack.top().shortPrint() << endl;
		my_stack.pop();
	}

	my_stack.push(TPlayingCard(TSuit::Heart, TValue::Queen));
	try
	{
		my_stack.top().setSuit(my_stack.top().getSuit());
	}
	catch (const char * error)
	{
		cout << error << endl;
	}

	try
	{
		my_stack.top().setValue(my_stack.top().getValue());
	}
	catch (const char * error)
	{
		cout << error << endl;
	}
	


	
	
	



	return 0;
}