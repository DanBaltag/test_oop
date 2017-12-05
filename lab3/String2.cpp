#include "String2.hpp"

String2::String2():s(80){
	x = new char[80];
}
String2::String2(int n):s(n){
	x = new char[s];
}
String2::String2(char* sir):x(sir), s(80){}
String2::String2(char* sir, int i):x(sir), s(i){}
int s_size(char x[]){
	int c = -1;
	while(x[++c] != '\0');
	return c;
}
void String2::set_size(){
	int c = s_size(x);
	if (c < s) s = c;
}
void String2::set_size(int c){
	if (c <= s){ s = c; x[s-1] = '\0'; }
	else cerr<<"wrong values to set_size(int)\n";
}
int String2::get_size(){
	return s;
}
char* add(char* x, char* y, int max_s){
	int i = 0, j = 0;
	char* sir = new char[max_s];
	while(y[j] != '\0'){
		while(x[i] != '\0'){
			sir[i] = x[i++];
		}
		sir[i++] = y[j++];
	}
	return sir;
}
void String2::set_string(char* sir){
	x = sir;	
}
String2 operator+(String2& s1, String2& s2){
	s1.set_size();
	s2.set_size();
	int max_s = s1.get_size() + s2.get_size() + 1;
	String y(add(s1.get_string(), s2.get_string(), max_s), max_s);
	return y;
}
void operator+=(String2& s1, String& s2){
	s1.set_size();
	s2.set_size();
	int max_s = s1.get_size() + s2.get_size();
	s1.set_string(add(s1.get_string(), s2.get_string()));
	s1.set_size(max_s); 
}
char* String::get_string(){
	return x;
}
ostream &operator<<(ostream &os, String &s){
	return os<<s.x;
}
istream &operator>>(istream &is, String &s){
	return is>>s.x;
}
bool operator==(String&s2){
	int i = 0;
	if (s == s2.get_size()){
		while(x[i] != '\0')
			if (x[i] != s2.get_string()[i++])
				return 0;
		return 1;
	}
	return 0;
}
int find(char* s1, char* s2){
	int pos = -1, s = -1, d = -1, i = 0, j, c = 0;

	while(s1[++s] != '\0');
	while(s2[++d] != '\0');
	if (d > s) return -1;
	for (i = 0, j = 0; s1[i] != '\0';){
		if (s1[i++] == s2[j]){
			c++; j++;
			while (s1[i] == s2[j] && s1[i++] != '\0' && s2[j++] != '\0')
				c++;
			if (c == d)
				return i - c;
			else{c = 0; j = 0;}
		}
	}
	return -1;
}
int String2::find_substring(char* s1, char* s2){
	return find(s1, s2);
}
char* rm(char* x, char* y){
	int i, d = -1;
	while(y[++d] != '\0');
	if ((i = find(x, y)) > -1){
		cout<<"i="<<i<<endl;
		while (x[i + d] != '\0')
			x[i] = x[d + i++];
		x[i] = '\0';
	}else{
		cout<<y<<" was not found in "<<x<<"\n";
	}
	return x;
}
String2 operator-(String2& s1, String2 &s2){
	set_size();
	s2.set_size();
	x = rm(s1.get_string(), s2.get_string());
	set_size();
	String z(x, s);
	return z;
}
void operator-=(String2& s1, String2 &s2){
	s1.set_size();
	s2.set_size();
	s1.set_string(rm(x, s2.get_string()));
	set_size();
}
String2 operator-(String2& s1, int n){
	set_size();
	if (n <= s){
		int d;
		cout<<"nr of char to delete:";cin>>d;
		while(x[n + d] != '\0')
			x[n] = x[d + n++];
		x[n] = '\0';
	}
	else cerr<<"int has a higher value than String size\n";
	String z(s1.x, s1.s);
	return z;
}

void operator--(String2& s1, int){
	set_size();
	s1.x[s1.(--s)] = '\0';
}
void operator--(String& ob){
	ob.set_size();
	int n = ob.get_size();
	ob.set_size(n--);
}
String operator-(int n, String& ob){
	ob.set_size();
	char* x = ob.get_string();
	if (n <= ob.get_size()){
		int d;
		cout<<"nr of char to delete:";cin>>d;
		while(x[n + d] != '\0')
			x[n] = x[d + n++];
		x[n] = '\0';
	}
	else cerr<<"int has a higher value than String size\n";
	String z(x, ob.get_size());
	return z;
}
