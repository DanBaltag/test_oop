#ifndef __FT_H__
#define __FT_H__

#include <iostream>
#include <string>
using namespace std;

class Interfata{
	public:
		virtual void	set() = 0;
		virtual	string	get(string) = 0;
		virtual	void	print_data() = 0;
		
	protected:
		string den_comp;
		string dat_inf;
		string den_tar;
		string nr_curse;
};

class Aeroport:public Interfata{
	protected:
		int id;
	public:
		Aeroport();
		Aeroport(int);
		void	set();
		string	get(string);
		void	print_data();
		int	get_id();
};

class Avion:virtual public Aeroport{
	public:
		Avion();
		Avion(int);
		void	set();
		string	get(string);
		void	print_data();
	private:
		string	h_dec;
		string	h_ater;
		string	nr_pas;
		string	pista;
};

class Autocar:virtual public Aeroport{
	public:
		Autocar();
		Autocar(int);
		virtual void	set();
		virtual string	get(string);
		virtual void	print_data();
	private:
		string	id_poarta;
		string	nr_pas;
};

class Pasager:public Avion, public Autocar{
	public:
		Pasager();
		Pasager(int);
		void	set();
		string	get(string);
		void	print_data();
	private:
		string	id_bil;
		string	a_plec;
		string	h_plec;
		string	a_ater;
		string	h_ater;
};
#endif
