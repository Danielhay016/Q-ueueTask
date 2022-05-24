#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;



//Queue - abstract class 
class Queue
{
public:
	//Data Members 
	int sizeQ;
	//Virtual functions 
	virtual void Enqueue(int x) = 0; 
	virtual int Dequeue() = 0;
	virtual bool IsEmpty() = 0; 
	virtual int Top() = 0; 
	

};

