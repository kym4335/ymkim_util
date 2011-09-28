/*
 * StringClass.h
 *
 *  Created on: Sep 20, 2011
 *      Author: ymkim
 */

#ifndef STRINGCLASS_H_
#define STRINGCLASS_H_
using std::ostream;
using std::istream;

class string
{
private:
	int len;
	char* str;
public:
	string(const char* str=NULL);
	string(const string& s);
	~string();
	string& operator=(const string& str);
	string& operator+=(string& str);
	string operator+(const string& str);
	bool operator==(const string& str);
	friend ostream& operator<<(ostream& os, const string& str);
	friend istream& operator>>(istream& is, string& str);
};

ostream& operator<<(ostream& os, const string& str);
istream& operator>>(istream& is, string& str);

typedef string StringClass;

#endif /* STRINGCLASS_H_ */
