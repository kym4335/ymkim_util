/*
 * Queue.h
 *
 *  Created on: Sep 27, 2011
 *      Author: ymkim
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "linkedlist.h"

class Queue
{
	void* data;
	int front;
	int rear;
	int queue_size;
	bool isEmpty();
	LinkedList* list;
public:
	Queue();
	~Queue();
	void Push(void* data);
	void* Pop();
	void AllPop();
	int GetSize();
	void ShowAllData();
};

/* Git test */
/* test 2 */

#endif /* QUEUE_H_ */
