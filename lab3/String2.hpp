#ifndef __String_hpp__
#define __String_hpp__

#include <iostream>
using namespace std;

class String2{
	protected:
		char* x;
		int s;
	public:
		String2();
		String2(int);
		String2(char*);
		String2(char*, int);
		void set_size();
		void set_size(int);
		void set_string(char*);

		friend String2 operator+(String2&);
		friend String2 operator-(String2&);
		friend String2 operator-(int);
		friend void operator+=(String2&);
		friend void operator-=(String2&);
		char* get_string();
		int get_size();
		int find_substring(char*, char*);
		friend bool operator==(String2&);
		friend void operator--(int);
		friend String2 operator-(int, String2&);
		friend void operator--(String2&);
		friend ostream &operator<<(ostream&, String2&);
		friend istream &operator>>(istream&, String2&);
};

#endif
