#include "String.hpp"

void comp(String x, String y);
void cmd();

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
	x--;
	cout<<x<<"\n";
	--x;
	cout<<x<<"\n";
	x = 1 - x;
	cout<<x<<"\n";
}

void comp(String x, String y){
	if (x == y) cout<<x<<" = "<<y<<"\n";
	else cout<<x<<" != "<<y<<"\n";
}
void help(){
	cout<<"cout<<ob print String\ncin>>\nob1 + ob2 concatenate String\n ob1 - ob2 eliminate ob2 from ob1\n ob1 += ob2 and ob1 -= ob2\n ob1 - int x eliminate n chars from x pos of ob1\n int x - ob1 the same as ob1 - int x\n --ob and ob--\n";
}
void select_op(String& x, string op){
	String y;
	if (op == "help") hepl();
}
void cmd(){
	String x;
	string op;
	while(true){
		cin>>x;
		if (x == "quit" || x == "q") return;
		cin>>op;
	}
}
