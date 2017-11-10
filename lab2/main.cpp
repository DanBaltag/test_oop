#include "ft.h"
#include <list>
#include <iterator>

Aeroport* type();
void set_val(list<Aeroport*> l);
void make(list<Aeroport*> *l);
void print(list<Aeroport*> l);
//void new_data(list<Aeroport*> l);

int main(){
	list<Aeroport*> l;
	make(&l);
	set_val(l);
	print(l);
}

void	make(int n, list<Aeroport*> *l){
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
		(*i)->set();
}
