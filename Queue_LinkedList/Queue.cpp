/*
 * Queue.cpp
 *
 *  Created on: Sep 27, 2011
 *      Author: ymkim
 */

#include <iostream>
#include "Queue.h"

using std::cout;
using std::endl;

bool Queue::isEmpty()
{
	if(GetSize() == 0)
		return true;
	else
		return false;
}

Queue::Queue()
{
	front = 0;
	rear = 0;
	queue_size = 0;
	list = new LinkedList;
}

Queue::~Queue()
{
	if(GetSize() != 0)
		AllPop();
	delete list;
}

void Queue::Push(void* data)
{
	list->AddLinkedList(data);
	rear++;
	queue_size++;
}

void* Queue::Pop()
{
	if(isEmpty()){
		cout << "Queue is Empty!!" << endl;
		rear = 0;
		front = 0;
	}
	else{
		data = list->GetLinkedListData(front);
		list->RemoveLinkedList(front);
//		front++;
		queue_size--;
		return data;
	}
}

void Queue::AllPop()
{
	list->RemoveAllLinkedList();
}

int Queue::GetSize()
{
	return queue_size;
}

void Queue::ShowAllData()
{
	for(int i=0; i<list->GetLinkedListSize(); i++){
		cout << (char*)list->GetLinkedListData(i) << endl;
	}
}

int main()
{
	Queue qu;
	char* str1 = "push1";
	char* str2 = "push2";
	char* str3 = "push3";
	char* str4 = "push4";
	char* str5 = "push5";

	//Push
	qu.Push(str1);
	qu.Push(str2);
	qu.Push(str3);
	qu.Push(str4);
	qu.Push(str5);

	//Pop
#if 1
	int count = qu.GetSize();
	cout << "size : " << count << endl;
	for(int i=0; i<count; i++){
		cout << (char*)qu.Pop() << endl;
	}
#else
	qu.ShowAllData();
#endif

	return 0;
}

