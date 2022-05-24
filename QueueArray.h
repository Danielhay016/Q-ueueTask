#pragma once
#include "Queue.h"



//QueueArray - Queue using an array
class QueueArray : public Queue
{
	//Data Members 
    public : 
	int* head;
	int* tail; 
	int* array; 
    int sizeQarray;
	int counter;

	//Metods 
	QueueArray(int lengthArray);
	virtual void Enqueue(int x);
	virtual int Dequeue();
	virtual bool IsEmpty();
	virtual int Top();
	

};

