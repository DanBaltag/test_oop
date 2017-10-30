#include "ft.h"

void	Pasager::set(){
		  cout<<"id_bil=";cin>>id_bil;
		  cout<<"a_plec=";cin>>a_plec;
		  cout<<"h_plec=";cin>>h_plec;
		  cout<<"a_ater=";cin>>a_ater;
		  cout<<"h_ater=";cin>>h_ater;
		  cout<<"\n";
}

string	Pasager::get(string x){
		  if(x == "id_bil") return id_bil;
		  if(x == "a_plec") return a_plec;
		  if(x == "h_plec") return h_plec;
		  if(x == "a_ater") return a_ater;
		  if(x == "h_ater") return h_ater;
}

void	Pasager::print_data(){
		  cout<<"id_bil="<<get("id_bil")<<"\n";
		  cout<<"a_plec="<<get("a_plec")<<"\n";
		  cout<<"h_plec="<<get("h_plec")<<"\n";
		  cout<<"a_ater="<<get("a_ater")<<"\n";
		  cout<<"h_ater="<<get("h_ater")<<"\n";
		 cout<<"\n";
}
