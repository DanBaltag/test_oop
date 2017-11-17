#include "String.hpp"

int main(){
	String x(80), y;
	cin>>x;
	cin>>y;
	cout<<x.get_string()[1]<<"\n";
	String z  = x + y;
	cout<<z;
}
