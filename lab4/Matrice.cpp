#include <iostream>
using namespace std;

template <class T,  class U, class V>
class Matrice{
	private:
		union types{T* a; U* b; V* c;};
		int m,n;
		union types** mat;
		mk_matr();
		init_matr();
	public:
		Matrice();
		Matrice(int, int);
		void add_el(int, int, T);
		void add_el(int, int, U);
		void add_el(int, int, V);
		void show();
};

union types** Matrice::init_matr(int m, int n){
	return struct str x[m][n];
}

Matrice::Matrice():m(2),n(2){
	mat = init_matr(m,n);
	mk_matr();
}

Matrice::Matrice(int x, int y):m(x),n(y){
	mat = init_matr(m,n);
	mk_matr(m,n);
}

template <class T>
void Matrice<T>::add_el(int l, int k, T e){
	mat[l][k]->a = e;
}

template <class U>
void Matrice<T>::add_el(int l, int k, U e){
	mat[l][k]->b = e;
}

template <class V>
void Matrice<T>::add_el(int l, int k, V e){
	mat[l][k]->c = e;
}

void Matrice::show(){
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
		   cout<<mat[i][j]<<"\n";
	cout<<"done\n";
}

template <class T, U, V>
void String::mk_matr(){
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++){
		   int c;
		   cout<<"1:int\t2:double\t3:string\t"; cin>>c;
		   switch(c){
			   case 1: T e; cin>>e; add_el(i,j,e); break;
			   case 2: U e; cin>>e; add_el(i,j,e); break;
			   case 3: V e; cin>>e; add_el(i,j,e); break;
			   default: T e; cin>>e; add_el(i,j,e); break;
		   }
	   }
}

int main(){
	double x = 23.3, y = 9.2; int i = 2; string = "bla";
	Matrice<int, double, string> mo;
	mo.show();
}

