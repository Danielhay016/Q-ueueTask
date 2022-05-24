#include "MQueue.h"
#include "Queue.h"

//Daniel Hay - 209042720 && Noya Ossi - 318638053 

//C'tor
MQueue::MQueue(Queue* QueueArray, Queue* QueueList)
{
	this->QueueArray = QueueArray;
	this->QueueList = QueueList;
	changeMid = false;
}
//Adds a new figure x of general type to the end of the middle turn
void MQueue::MEnqueue(int value)
{
	this->QueueList->Enqueue(value);
	if (changeMid)
	{
		int removeItem = this->QueueList->Dequeue();
		this->QueueArray->Enqueue(removeItem);
	}
	cout << value << " ";
	changeMid = (this->QueueArray->sizeQ + this->QueueList->sizeQ) % 2 == 0;
}
//Removes the figure at the top of the middle queue and returns it
int MQueue::MDequeue()
{
	int removeItem;
	if (this->QueueArray->IsEmpty())
	{
		removeItem = this->QueueList->Dequeue();
	}
	else
	{
		removeItem = this->QueueArray->Dequeue();
	}
	changeMid = (this->QueueArray->sizeQ + this->QueueList->sizeQ) % 2 == 1 &&
		this->QueueList->sizeQ > 2;

	if (changeMid)
	{
		int DeItem = this->QueueList->Dequeue();
		this->QueueArray->Enqueue(DeItem);
	}

	return removeItem;
}
//Returns the data that is in the middle of the middle queue without removing it from the queue
int MQueue::Middle()
{
	 return this->QueueList->Top();

}
