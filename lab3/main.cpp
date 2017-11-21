#include "String.hpp"

int main(){
	String x(80), y;
	cin>>x;
	cin>>y;
	cout<<(x == y)<<"\n";
	x += y;
	cout<<x<<"\n";
	cout<<(x == y)<<"\n";
	x = x - y;
	cout<<x<<"\n";
}
