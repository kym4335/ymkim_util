/*
 * linkedlist_test.h
 *
 *  Created on: Sep 27, 2011
 *      Author: ymkim
 */

#ifndef LINKEDLIST_TEST_H_
#define LINKEDLIST_TEST_H_

class Node
{
private:
	Node* prev;
	Node* next;
	void* data;
public:
	Node();
	~Node();
	Node(void* data);
	void SetData(void* data);
	void SetPrev(Node* nd);
	void SetNext(Node* nd);
	void* GetData();
	Node* GetPrev();
	Node* GetNext();
};

class LinkedList
{
private:
	int list_size;
	Node* head;
	Node* tail;
	Node* last;

	Node* GetHead();
	Node* GetTail();
	void SetHead(Node* nd);
	void SetTail(Node* nd);
	int GetLastIndex();

public:
	LinkedList();
	~LinkedList();
	void AddLinkedList(void* data);
	void RemoveLinkedList(int position);
	void RemoveAllLinkedList(void);
	int GetLinkedListSize(void);
	Node* GetLinkedList(int position);
	void* GetLinkedListData(int position);
	void ShowAllData();
};

#endif /* LINKEDLIST_TEST_H_ */
