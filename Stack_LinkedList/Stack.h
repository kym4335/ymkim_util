/*
 * Queue.h
 *
 *  Created on: Sep 27, 2011
 *      Author: ymkim
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "linkedlist.h"

class Stack
{
	void* data;
	int bottom;
	int top;
	int stack_size;
	bool isEmpty();
	LinkedList* list;
public:
	Stack();
	~Stack();
	void Push(void* data);
	void* Pop();
	void AllPop();
	int GetSize();
	void ShowAllData();
};


#endif /* QUEUE_H_ */
