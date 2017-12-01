#ifndef __String_hpp__
#define __String_hpp__

#include <iostream>
using namespace std;

class String{
	protected:
		char* x;
		int s;
	public:
		String();
		String(int);
		String(char*);
		String(char*, int);
		void set_size();
		void set_size(int);

		String operator+(String&);
		String operator-(String&);
		String operator-(int);
		void operator+=(String&);
		void operator-=(String&);
		char* get_string();
		int get_size();
		int find_substring(char*, char*);
		bool operator==(String&);
		void operator--(int);

		friend String operator-(int, String&);
		friend void operator--(String&);
		friend ostream &operator<<(ostream&, String&);
		friend istream &operator>>(istream&, String&);
};

#endif
