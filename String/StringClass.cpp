/*
 * StringClass.cpp
 *
 *  Created on: Sep 20, 2011
 *      Author: ymkim
 */

#include <iostream>
#include <cstring>

#include "StringClass.h"

using std::cout;
using std::cin;
using std::endl;

using std::ostream;
using std::istream;

string::string(const char* str)
{
	this->len = (str != NULL ? strlen(str+1) : 1);
	this->str = new char[this->len];

	if(str != NULL)
		strcpy(this->str, str);
}

string::string(const string& str)
{
	this->len = str.len;
	this->str = new char [str.len];
	strcpy(this->str, str.str);
}

string::~string()
{
	delete []str;
}

string& string::operator=(const string& str)
{
	delete []this->str;
	this->len = str.len;
	this->str = new char[strlen(str.str)+1];
	strcpy(this->str, str.str);

	return *this;
}

string& string::operator+=(string& str)
{
	this->len = strlen(this->str) + strlen(str.str) -1;
	char* tempStr = new char[len];
	strcpy(tempStr, this->str);

	delete []this->str;
	strcat(tempStr, str.str);
	this->str = tempStr;

	return *this;
}

string string::operator+(const string& str)
{
	char* tempStr;
	tempStr = new char[this->len + str.len -1];

	strcpy(tempStr, this->str);
	strcat(tempStr, str.str);

	string tstr(tempStr);

	delete []tempStr;

	return tstr;
}

bool string::operator==(const string& s)
{
	bool ret;

	if(strcmp(str, s.str) == 0)
		ret = true;
	else
		ret = false;

	return ret;
}

ostream& operator<<(ostream& os, const string& str)
{
	os<<str.str;

	return os;
}

istream& operator>>(istream& is, string& str)
{
	char s[100];

	is>>s;
	str = string(s);

	return is;
}

int main()
{
	string str1="Good ";
	string str2="Morning";
	string str3=str1+str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if(str1 == str3){
		cout << "Equal!!!" << endl;
	}

	string str4;
	cout << "Input String : ";
	cin >> str4;
	cout << "Output String : " << str4 << endl;

	return 0;
}


