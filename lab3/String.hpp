#ifndef __String_hpp__
#define __String_hpp__

#include <iostream>
using namespace std;

class String{
	protected:
		string x;
	public:
		String();
		String(string s);
		String operator+(String);
};

#endif
