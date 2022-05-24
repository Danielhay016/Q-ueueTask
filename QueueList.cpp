#include "QueueList.h"




//C'tor
QueueList::QueueList()
{
	head = NULL;
	tail = NULL;
	sizeQ = 0;
}
//Enqueue - add member to the queue 
void QueueList::Enqueue(int value)
{
	sizeQ++;
	if (head == NULL)
	{
		Item* newItem = new Item(value, NULL, NULL);
			tail = newItem;
			head = newItem;
	}
	else
	{
		Item* newItem = new Item(value, tail, NULL);
		tail->next = newItem;
		tail = newItem;

	}
}
//Dequeue - remove member from the queue
int QueueList::Dequeue()
{
	int temp = head->value;
	if (head->next != NULL)
	{
		head->next->prev = NULL;
		head = head->next;
	}
	else
	{
		head = NULL;
		tail = NULL;
	}

	return temp;
}
// IsEmpty - checking if the queue is empty
bool QueueList::IsEmpty()
{
	bool res = false;
	if (head == NULL && tail == NULL)
	{
		res = true;
		cout << "The Q is empty" << endl;
		return res;

	}
	else
		return res;
}
//Top - return the next member which is supposed to come out
int QueueList::Top()
{
	return head->value;
}
