#include "ft.h"

Aeroport* type();
void	set_val(int n, Aeroport**);
void	make(int, Aeroport**);
void	print(int n, Aeroport *x[]);

int main(){
	int n;
	cout<<"n=";cin>>n;
	Aeroport *a[n];
	make(n, a);
	set_val(n, a);
	print(n, a);
}

void	make(int n, Aeroport *a[]){
	for(int i = 0; i < n; i++){
		a[i] = type();
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

void	set_val(int n, Aeroport *x[]){
	for (int i = 0; i < n; i++){
		x[i]->set();
	}
}

void	print(int n, Aeroport *x[]){
	for (int i = 0; i < n; i++){
		x[i]->print_data();
	}
}
