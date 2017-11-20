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
		String(char*, int);
		void set_size();
		String operator+(String&);
		void operator+=(String&);
		char* get_string();
		int get_size();
		//bool operator==(String&);

		friend ostream &operator<<(ostream&, String&);
		friend istream &operator>>(istream&, String&);
};

#endif
