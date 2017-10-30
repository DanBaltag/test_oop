#include "ft.h"

void	Avion::set(){
		  cout<<"h_dec=";cin>>h_dec;
		  cout<<"h_ater=";cin>>h_ater;
		  cout<<"pista=";cin>>pista;
		  cout<<"nr_pas=";cin>>nr_pas;
		  cout<<"\n";
}

string	Avion::get(string x){
		  if (x == "h_dec")return h_dec;
		  if (x == "h_ater")return h_ater;
		  if (x == "pista")return pista;
		  if (x == "nr_pas")return nr_pas;
}

void	Avion::print_data(){
		  cout<<"h_dec="<<get("h_dec")<<"\n";
		  cout<<"h_ater="<<get("h_ater")<<"\n";
		  cout<<"pista="<<get("pista")<<"\n";
		  cout<<"nr_pas="<<get("nr_pas")<<"\n";
		 cout<<"\n";
}
