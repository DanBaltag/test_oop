#include <iostream>
using namespace std;

template <class T,  class U, class V> class Matrice{
	private:
		struct types{T a; U b; V c;};
		int m,n;
		struct types** mat;
		void mk_matr();
	public:
		Matrice();
		Matrice(int, int);
		void add_el_t(int, int);
		void add_el_u(int, int);
		void add_el_v(int, int);
		void show();
};


template <class T, class U, class V>
Matrice<T,U,V>::Matrice():m(2),n(2){
	struct types mat[m][n];
	mk_matr();
}

template <class T, class U, class V>
Matrice<T,U,V>::Matrice(int x, int y):m(x),n(y){
	struct types mat[m][n];
	mk_matr();
}

template <class T, class U, class V>
void Matrice<T,U,V>::add_el_t(int l, int k){
	T t;
	cin>>t;
	mat[l][k].a = t;
}

template <class T, class U, class V>
void Matrice<T,U,V>::add_el_u(int l, int k){
	U u; cin>>u;
	mat[l][k].b = u;
}

template <class T, class U, class V>
void Matrice<T,U,V>::add_el_v(int l, int k){
	V v; cin>>v;
	mat[l][k].c = v;
}

template <class T, class U, class V>
void Matrice<T,U,V>::show(){
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++){
		   int ch;
		   cout<<"1:int\t2:double\t3:string\t"; cin>>ch;
		   switch(ch){
			   case 1:cout<<mat[i][j].a<<"\n"; break;
			   case 2:cout<<mat[i][j].b<<"\n"; break;
			   case 3:cout<<mat[i][j].c<<"\n"; break;
			   default:cout<<mat[i][j].a<<"\n";break;
		   }
	   }
}

template <class T, class U, class V>
void Matrice<T, U, V>::mk_matr(){
	for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++){
		   int ch;
		   cout<<"1:int\t2:double\t3:string\t"; cin>>ch;
		   switch(ch){
			   case 1: add_el_t(i,j); break;
			   case 2: add_el_u(i,j); break;
			   case 3: add_el_v(i,j); break;
			   default: add_el_t(i,j); break;
		   }
	   }
}

int main(){
	double x = 23.3, y = 9.2; int i = 2; string s= "bla";
	Matrice<int, double, string> mo;
	mo.show();
}

