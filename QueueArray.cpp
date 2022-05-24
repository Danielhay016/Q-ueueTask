#include "QueueArray.h"

//Daniel Hay - 209042720 && Noya Ossi - 318638053 

//C'tor
QueueArray::QueueArray(int lengthArray)
{
	sizeQ = lengthArray;
	int* QArray = new int[sizeQ];//60 
	array = QArray;
	head = &QArray[0];
	tail = &QArray[0];
	sizeQarray = 60; 
	counter = 0;
	

}
//Enqueue - add member to the queue 
void QueueArray::Enqueue(int x)
{
	
    if (counter < sizeQ - 1)
	{
		*tail = x;
		 tail++;
		 counter++;
	}
	 else if ((counter == sizeQ - 1) && (head == array ) || (tail + 1 == head))
	{
		cout << "overflow!!" << endl;
	}
    else if  ((tail == array + sizeQ - 1 ) && head != array)
	{
		*tail = x;
		tail = array;
		counter =0;
	}

}
//Dequeue - remove member from the queue
int QueueArray::Dequeue()
{
	int temp =  -1 ;
	 bool res = IsEmpty();
	 if (res)
	 {
		 return temp;
	 }
	 else
	 {
		 temp = *head;
		 head++;
		 
	 }

	 return temp;

}
// IsEmpty - checking if the queue is empty
bool QueueArray::IsEmpty()
{
	bool res = false; 
	if ( tail == head )//לשנות ל head+1
	{
		res = true;
		
		return res;cout << "The Q is empty" << endl;
	}
	else
		return res;
}
//Top - return the next member which is supposed to come out
int QueueArray::Top()
{
	return *head;

 }
