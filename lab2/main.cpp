#include "ft.h"
#include <list>
#include <iterator>

static int id = 0;

Aeroport* type();
void set_val(list<Aeroport*> l);
void make(list<Aeroport*> *l);
void print(list<Aeroport*> l);
//void new_data(list<Aeroport*> l);
void add_elmt(list<Aeroport*> *l);
void erase_elmt(list<Aeroport*> *l);
void usr_ch(list<Aeroport*> *l);

int main(){
	list<Aeroport*> l;
	make(&l);
	set_val(l);
	print(l);
	usr_ch(&l);
}

void	make(list<Aeroport*> *l){
	int n;
	cout<<"n=";cin>>n;
	for(int i = 0; i < n; i++){
		Aeroport *x = type();
		l->push_back(x);
	}
}

Aeroport* type(){
	int k;
	Aeroport *x;
	cout<<"choose the class:\n1:Aeroport\n2:Avion\n3:Autocar\n4:Pasager\n"; cin>>k;
	switch(k){
		case 2: x = new Avion(id++); return x;
		case 3: x = new Autocar(id++); return x;
		case 4: x = new Pasager(id++); return x;
		default: x = new Aeroport(id++); return x;
	}
}

void	set_val(list<Aeroport*> l){
	for (list<Aeroport*>::iterator i = l.begin(); i != l.end(); i++)
	(*i)->set();
}

void	print(list<Aeroport*> l){
	for (list<Aeroport*>::iterator i = l.begin(); i != l.end(); i++)
		(*i)->print_data();
}

void usr_ch(list<Aeroport*> *l){
	string c;
	while(c != " "){
		cout<<"'add' to add an element\n'erase' to delete an element\n'print' to print the list\n'quit' to exit\n";
		cin>>c;
		if (c == "add" || c == "a") add_elmt(l);
		if (c == "erase" || c == "e") erase_elmt(l);
		if (c == "print" || c == "p") print(*l);
		if (c == "quit" || c == "q") return;
	}
	print(*l);
}

void add_elmt(list<Aeroport*> *l){
	Aeroport *x = type();
	x->set();
	string cmd;
	cout<<"where to add?\n'begin' to add at the beggining of the list\n'end' to add at the end\n"; cin>>cmd;
	if(cmd == "begin" || cmd == "b"){ l->insert(l->begin(), x); return;}
	if(cmd == "end" || cmd == "e"){ l->push_back(x); return;}
	cout<<"wrong input\n"; return;
}

void erase_elmt(list<Aeroport*> *l){
	string cmd;
	cout<<"what to delete?\n'begin' to delete the first element\n'end' to delete the last element\n"; cin>>cmd;
	if(cmd == "begin" || cmd == "b"){ l->erase(l->begin());return; }
	if(cmd == "end" || cmd == "e"){ l->erase(--(l->end())); return;}
	cout<<"wrong input\n"; return;
}
