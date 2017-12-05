#include <iostream>
using namespace std;

template <class T>
class Matrice{
	private:
		T a,b,c;
	public:
		A(T x1,T x2,T x3):a(x1), b(x2), c(x3){}
		T bigger();
};

template <class T>
T classa_A<T>::bigger(){
	return (a > b ? a : b);
}

int main(){
	double x = 23.3, y = 9.2;
	classa_A<double> A_ob(x, y);
	cout<<A_ob.bigger<<"\n";
}

