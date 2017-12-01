#include "String.hpp"

void comp(String x, String y);
void cmd();
void select_op(String& x, string op);

int main(){
	cmd();
}

void comp(String x, String y){
	if (x == y) cout<<x<<" = "<<y<<"\n";
	else cout<<x<<" != "<<y<<"\n";
}
void help(){
	cout<<"1:cout<<ob print String\n2:cin>> read string\n3:ob1 + ob2 concatenate String\n4:ob1 - ob2 eliminate ob2 from ob1\n5:ob1 += ob2\n6:ob1 -= ob2\n7:ob1 - int x eliminate n chars from x pos of ob1\n8:int x - ob1 the same as ob1 - int x\n9:--ob\n10:ob--\n11:ob1 == ob2 to compare\n";
}
void select_op(String& x, string op){
	String y;
	if (op == "1"){ 
		cout<<x<<"\n";
	       return;}
	if (op == "2"){ 
		cin>>x;
	       return;}
	if (op == "3"){ 
		cin>>y;
		x = x + y;
		cout<<x<<"\n";
	       return;}
	if (op == "4"){ 
		cin>>y;
		x = x - y;
		cout<<x<<"\n";
	       return;}
	if (op == "5"){ 
		cin>>y;
		x += y;
		cout<<x<<"\n";
	       return;}
	if (op == "6"){ 
		cin>>y;
		x -= y;
		cout<<x<<"\n";
	       return;}
	if(op == "7"){
		int z;
		cin>>z;
		x = x - z;
		cout<<x<<"\n";
		return;
	}
	if (op == "8"){
		int z;
		cin>>z;
		x = z - x;
		return;
	}
	if (op == "9"){
		x--;
		cout<<x;
		return;
	}
	if (op == "10"){
		--x;
		return;
	}
	if (op == "11"){
		cin>>y;
		comp(x,y);
	}
}
void cmd(){
	String x;
	cin>>x;
	string op;
	help();
	while(true){
		cout<<"!quit or !q to exit\n";
		cout<<"!help or !h to exit\n";
		cin>>op;
		if (op == "!quit" || op == "!q") return;
		if (op == "!help" || op == "!h") help();
		select_op(x, op);
	}
}
