#include "Queue.h"
#include "QueueArray.h"
#include "QueueList.h"
#include "MQueue.h"
#include <random>



int main()
{
	//Creates 2 instances of Mqueue
	Queue* MQarray = new   QueueArray(60); // array 
	Queue* MQlist = new   QueueList();     // link - list 
	srand(time(NULL));
	int* randarray = new int[101];

	//Printing of the random organs in the array
	cout << "The randoms numbers are : " << endl;
	for (int i = 0; i < 101; i++)
	{
		randarray[i] = rand() % 10000 + 1;
		cout << randarray[i] << " ";
	}

	//Creating middle queue   
	MQueue* MQmid = new MQueue(MQarray, MQlist);
	 
	//Printing the organs in the MQ 
	cout << endl << "\nThe MQ numbers are : " << endl; 
	
	for (int i = 0; i < 51; i++)
	{
		if (MQarray->sizeQ != 59)
		{
			MQmid->MEnqueue(randarray[i]);
		}
		else
			cout << " no space!!!!! " << endl; 

	}
	//Showing the middle number 
	int middle = MQmid->Middle();
	cout << " the middle number is : " << middle << endl;
	//Priting the removing (2) numbers from the middle queue 
	cout << endl << "removing 2 numbers from the Queue : " ;
	for (int i = 0; i < 2; i++)
	{
		int returnval = MQmid->MDequeue();
		if (returnval == -1)
		{

			cout << endl << endl << "the Q is empty";

		}
		cout << returnval << " ";


	}
	//Priting the middle organ
	middle = MQmid->Middle();
	if (middle != -1)
	{
		cout << endl << "\nmid of MQ : " << middle << endl;
	}
	else
		cout << endl << " Q is empty - No mid number " << endl;
	//Enter the rest of the numbers
	cout << endl << "\nThe numbers of MQ are :\n"; 
	for (int i = 51; i < 101; i++)
	{
		if (MQarray->sizeQ != 60 - 1)
			MQmid->MEnqueue(randarray[i]);
		else
			cout << endl << "The Queue is full";

	}
	//Priting the middle organ
	middle = MQmid->Middle();
	if (middle != -1)
	{
		cout << endl << "\nmid of MQ :" << middle << endl;
	}
	else
		cout << endl << " Queue is empty  ";

}
