#include "string.hpp"

String::String():x(" "){}
String::String(string s):x(s){}
String String::operator+(String &s2){
	return this->x + s2.x
}
