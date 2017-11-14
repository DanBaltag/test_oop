#include "ft.h"

Aeroport::Aeroport(){}

Aeroport::Aeroport(int i):id(i){}

void		Aeroport::set(){
		  cout<<"den_comp=";cin>>den_comp;
		  cout<<"dat_inf=";cin>>dat_inf;
		  cout<<"den_tar=";cin>>den_tar;
		  cout<<"nr_curse";cin>>nr_curse;
		  cout<<"\n";
}

string	Aeroport::get(string x){
		  if (x == "den_comp") return den_comp;
		  if (x == "dat_inf") return dat_inf;
		  if (x == "den_tar") return den_tar;
		  if (x == "nr_curse") return nr_curse;
		  return NULL;
}

void		Aeroport::print_data(){
		  cout<<"den_comp="<<get("den_comp")<<"\n";
		  cout<<"dat_inf="<<get("dat_inf")<<"\n";
		  cout<<"den_tar="<<get("den_tar")<<"\n";
		  cout<<"nr_curse="<<get("nr_curse")<<"\n";
		  cout<<"\n";
}
