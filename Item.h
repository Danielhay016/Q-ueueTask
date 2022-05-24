#pragma once
#include "Queue.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;



//Member in a linked list
class Item
{
public:
	//Data Member
	int value;
	Item* next;
	Item* prev;
	//C'tor
	Item(int value, Item* prev, Item* next)
	{
		this->next = next;
		this->prev = prev;
		this->value = value;
	}

};

