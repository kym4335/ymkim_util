/*
 * Stack.cpp
 *
 *  Created on: Sep 27, 2011
 *      Author: ymkim
 */

#include <iostream>
#include "Stack.h"

using std::cout;
using std::endl;

bool Stack::isEmpty()
{
	if(GetSize() == 0)
		return true;
	else
		return false;
}

Stack::Stack()
{
	bottom = 0;
	top = 0;
	stack_size = 0;
	list = new LinkedList;
}

Stack::~Stack()
{
	if(GetSize() != 0)
		AllPop();
	delete list;
}

void Stack::Push(void* data)
{
	list->AddLinkedList(data);
	top++;
	stack_size++;
}

void* Stack::Pop()
{
	if(isEmpty()){
		cout << "Stack is Empty!!" << endl;
		bottom = 0;
		top = 0;
	}
	else{
		top--;
		stack_size--;
		data = list->GetLinkedListData(top);
		list->RemoveLinkedList(top);
		return data;
	}
}

void Stack::AllPop()
{
	list->RemoveAllLinkedList();
}

int Stack::GetSize()
{
	return stack_size;
}

void Stack::ShowAllData()
{
	cout << "*** Show All Data ***" << endl;
	for(int i=0; i<list->GetLinkedListSize(); i++){
		cout << (char*)list->GetLinkedListData(i) << endl;
	}
}

int main()
{
	Stack stack;
	char* str1 = "push1";
	char* str2 = "push2";
	char* str3 = "push3";
	char* str4 = "push4";
	char* str5 = "push5";

	//Push
	stack.Push(str1);
	stack.Push(str2);
	stack.ShowAllData();
	//Pop
	stack.Pop();
	stack.ShowAllData();

	//Push
	stack.Push(str3);
	stack.ShowAllData();

	//Pop
	stack.Pop();
	//Push
	stack.Push(str4);
	stack.Push(str5);
	//Pop
#if 0
	int count = st.GetSize();
	cout << "size : " << count << endl;
	for(int i=0; i<count; i++){
		cout << (stack.Pop() << endl;
	}
#else
//	stack.ShowAllData();
	stack.AllPop();
#endif

	return 0;
}

