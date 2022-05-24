#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Queue.h"
#include "QueueArray.h"
#include "QueueList.h"



using namespace std;
//MQueue - Returns the middle member
class MQueue
{
	//Data Members 
    public: 
	Queue* QueueArray;
	Queue* QueueList;
    bool changeMid;

		//Metods 
      MQueue(Queue* QueueArray, Queue* QueueList);
      void MEnqueue(int value);
      int MDequeue();
      int Middle();


};

