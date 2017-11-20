#include "String.hpp"

String::String():s(80){
	x = new char[80];
}
String::String(int n):s(n){
	x = new char[s];
}
String::String(char* sir, int i):x(sir), s(i){}
void String::set_size(){
	int c = 0;
	while(x[c++]);
	if (c < s) s = c;
}
int String::get_size(){
	return s;
}
String String::operator+(String &s2){
	this->set_size();
	s2.set_size();
	int max_s = this->s + s2.get_size() - 1;
	int i = 0, j = 0;
	char sir[max_s];
	while(s2.get_string()[j] != '\0'){
		while(this->x[i] != '\0')
			sir[i] = this->x[i++];
		sir[i++] = s2.get_string()[j++];
	}
	String y(sir, max_s);
	return y;
}
void String::operator+=(String &s2){
	this->set_size();
	s2.set_size();
	int max_s = this->s + s2.get_size() - 1;
	int i = 0, j = 0;
	char sir[max_s];
	while(s2.get_string()[j] != '\0'){
		while(this->x[i] != '\0')
			sir[i] = this->x[i++];
		sir[i++] = s2.get_string()[j++];
	}
	x = sir;
	cout<<x<<endl;
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
/*bool String::operator==(String&s2){
	if(this->)
}*/
