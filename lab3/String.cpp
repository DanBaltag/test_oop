#include "String.hpp"

String::String():s(80){
	x = new char[80];
}
String::String(int n):s(n){
	x = new char[s];
}
String::String(char* sir, int i):x(sir), s(i){}
void String::set_size(){
	int c = -1;
	while(x[++c] != '\0');
	if (c < s) s = c;
}
int String::get_size(){
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
String String::operator+(String &s2){
	this->set_size();
	s2.set_size();
	int max_s = this->s + s2.get_size() + 1;
	String y(add(x, s2.get_string(), max_s), max_s);
	return y;
}
void String::operator+=(String &s2){
	this->set_size();
	s2.set_size();
	int max_s = this->s + s2.get_size();
	x = add(x, s2.get_string(), max_s);
	s = max_s; 
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
bool String::operator==(String&s2){
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
	int pos = -1, d = 0, i = 0, j, c = 0;

	while(s2[i++] != '\0') d++;
	for (i = 0, j = 0; s1[i] != '\0';){
		if (s1[i++] == s2[j]){
			c++; j++;
			while (s1[i] == s2[j] && s1[i++] != '\n' && s2[j++] != '\n')
				c++;
			if (c == d)
				return i - c;
			else{c = 0; j = 0;}
		}
	}
	return -1;
}
int String::find_substring(char* s1, char* s2){
	return find(s1, s2);
}
char* rm(char* x, char* y){
	int i, d = -1;
	while(y[++d] != '\0');
	if ((i = find(x, y)) > -1){
		while (x[i + d] != '\0')
			x[i] = x[d + i++];
		x[i] = '\0';
	}else{
		cout<<y<<" was not found in "<<x<<"\n";
	}
	return x;
}
String String::operator-(String &s2){
	set_size();
	s2.set_size();
	x = rm(x, s2.get_string());
	set_size();
	String z(x, s);
	return z;
}
void String::operator-=(String &s2){
	set_size();
	s2.set_size();
	x = rm(x, s2.get_string());
	set_size();
}
