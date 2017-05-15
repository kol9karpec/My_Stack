#pragma once

#include <vector>
#include <iostream>

template<class TObject, class Container>
class TStack
{
	Container data;
public:
	bool empty();
	int size();
	TObject & top();
	void push(const TObject & value);
	void pop();
};

template<class TObject, class Container>
bool TStack<TObject, Container>::empty()
{
	return data.empty();
}

template<class TObject, class Container>
int TStack<TObject, Container>::size()
{
	return data.size();
}

template<class TObject, class Container>
TObject & TStack<TObject, Container>::top()
{
	return data.back();
}

template<class TObject, class Container>
void TStack<TObject, Container>::push(const TObject & value)
{
	data.push_back(value);
}

template<class TObject, class Container>
void TStack<TObject, Container>::pop()
{
	data.pop_back();
}
