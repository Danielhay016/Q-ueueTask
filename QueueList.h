#pragma once
#include "Queue.h"
#include "Item.h"



//Queue using a two-way linked list
class QueueList : public Queue
{
     public:
	//Data Members
	Item* head;
	Item* tail;
	int sizeQ;

	//Metods
	QueueList();
	virtual void Enqueue(int value);
	virtual int Dequeue();
	virtual bool IsEmpty();
	virtual int Top();



};

