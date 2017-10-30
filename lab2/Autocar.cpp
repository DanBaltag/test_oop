#include "ft.h"

void	Autocar::set(){
		  cout<<"id_poarta=";cin>>id_poarta;
		  cout<<"nr_pas=";cin>>nr_pas;
		  cout<<"\n";
}

string	Autocar::get(string x){
		  if (x == "id_poarta") return id_poarta;
		  if (x == "nr_pas") return nr_pas;
}

void	Autocar::print_data(){
		  cout<<"id_poarta="<<get("id_poarta")<<"\n";
		  cout<<"nr_pas="<<get("nr_pas")<<"\n";
		 cout<<"\n";
}
