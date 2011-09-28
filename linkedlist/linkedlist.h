/*
 * linkedlist_test.h
 *
 *  Created on: Sep 27, 2011
 *      Author: ymkim
 */

#ifndef LINKEDLIST_TEST_H_
#define LINKEDLIST_TEST_H_

template <typename T>
class Node
{
private:
	Node* prev;
	Node* next;
	T* data;
public:
	Node();
	~Node();
	Node(T* data);
	void SetData(T* data);
	void SetPrev(Node* nd);
	void SetNext(Node* nd);
	T* GetData();
	Node* GetPrev();
	Node* GetNext();
};

template <typename T>
class LinkedList
{
private:
	int list_size;
	Node<T>* head;
	Node<T>* tail;
	Node<T>* last;

	Node<T>* GetHead();
	Node<T>* GetTail();
	void SetHead(Node<T>* nd);
	void SetTail(Node<T>* nd);

public:
	LinkedList();
	~LinkedList();
	void AddLinkedList(T* data);
	void RemoveLinkedList(int position);
	void RemoveAllLinkedList(void);
	int GetLinkedListSize(void);
	Node<T>* GetLinkedList(int position);
	T* GetLinkedListData(int position);
	void ShowAllData();
};

#endif /* LINKEDLIST_TEST_H_ */
