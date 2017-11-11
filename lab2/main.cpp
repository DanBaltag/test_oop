#include "ft.h"
#include <list>
#include <iterator>

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
		case 2: x = new Avion(); return x;
		case 3: x = new Autocar(); return x;
		case 4: x = new Pasager(); return x;
		default: x = new Aeroport(); return x;
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
	while(c != "quit"){
		cout<<"'add' to add an element\n'erase' to delete an element\n'quit' to exit";
		cin>>c;
		if (c == "add") add_elmt(l);
		if (c == "erase") erase_elmt(l);
	}
}

void add_elmt(list<Aeroport*> *l){
	Aeroport *x = type();
	list<Aeroport*>::iterator i;
	string cmd;
	cout<<"where to add?\n'begin' to add at the beggining of the list\n'end' to add at the end of the list\n'find' to add at a certain element by the id\n"; cin>>cmd;
	if(cmd == "begin"){ l->insert(l->begin(), x); return;}
	if(cmd == "end"){ l->push_back(x); return;}
	if(cmd == "find"){
		for (i = l->begin(); i != l->end(); i++)
			cout<<(*i)->get_id()<<"...\n";
		int e;
		cout<<"choose the id of the element before you want to add"; cin>>e;
		if (e < 0 || e > (*(l->end()))->get_id()){ cout<<"invalid id\n"; return; }
		for(i = l->begin(); i != l->end(); i++)
			if(e == (*i)->get_id()){
				l->insert(i, x); return;
			}
	}
	cout<<"wrong input\n"; return;
}

void erase_elmt(list<Aeroport*> *l){
	list<Aeroport*>::iterator i;
	string cmd;
	cout<<"what to delete?\n'begin' to delete the first element\n'end' to delete the last element\n'find' to delete at a certain element by the id\n"; cin>>cmd;
	if(cmd == "begin"){ l->erase(l->begin());return; }
	if(cmd == "end"){ l->erase(l->end()); return;}
	if(cmd == "find"){
		for (i = l->begin(); i != l->end(); i++)
			cout<<(*i)->get_id()<<"...\n";
		int e;
		cout<<"choose the id of the element you want to delete"; cin>>e;
		if (e < 0 || e > (*(l->end()))->get_id()){ cout<<"invalid id\n"; return; }
		for(i = l->begin(); i != l->end(); i++)
			if(e == (*i)->get_id()){
				l->erase(i); return;
			}
	}
	cout<<"wrong input\n"; return;
}
