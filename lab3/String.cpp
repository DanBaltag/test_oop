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
	while(x[c++] != '\0');
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
	char* sir = new char[max_s];
	while(s2.get_string()[j] != '\0'){
		while(this->x[i] != '\0'){
			sir[i] = this->x[i++];
		}
		sir[i++] = s2.get_string()[j++];
	}
	String y(sir, max_s);
	return y;
}
void String::operator+=(String &s2){
	this->set_size();
	s2.set_size();
	int max_s = this->s + s2.get_size();
	int i = 0, j = 0;
	char* sir = new char[max_s];
	while(s2.get_string()[j] != '\0'){
		while(this->x[i] != '\0'){
			sir[i] = this->x[i++];
		}
		sir[i++] = s2.get_string()[j++];
	}
	x = sir;
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

int String::find_substring(char* s1, char* s2){
	int pos = -1, d = 0, i = 0, j, c = 0;

	while(s2[i++] != '\0') d++;

	for (i = 0, j = 0; s1[i] != '\0'; i++){
		if (pos < 0 && s1[i] == s2[j++]){
			pos == i++;
			c++;
		}
		if (pos >= 0){
			while (s1[i++] == s2[j++])
				c++;
			if (c == d)
				return i - c - 1;
			else{c = 0; j = 0;}
		}
	}
	return -1;
}
String String::operator-(String &s2){
	set_size();
	s2.set_size();
	int i, d = s2.get_size();
	i = find_substring(x, s2.get_string());
	cout<<"found "<<i<<"\n";
	if (i > -1){
		while (i < i + d)
			x[i] = x[d + i++];
		x[i] = '\0';
	}else{
		cout<<s2.get_string()<<" was not found in "<<x<<"\n";
	}
	set_size();
	String z(x, s);
	return z;
}
