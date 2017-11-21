#include "String.hpp"

void comp(String x, String y);

int main(){
	String x(80), y;
	cin>>x;
	cin>>y;
	comp(x,y);
	x += y;
	cout<<x<<"\n";
	comp(x,y);
	x = x - y; // x -= y;
	cout<<x<<"\n";
	x = x - 1;
	cout<<x<<"\n";
}

void comp(String x, String y){
	if (x == y) cout<<x<<" = "<<y<<"\n";
	else cout<<x<<" != "<<y<<"\n";
}
