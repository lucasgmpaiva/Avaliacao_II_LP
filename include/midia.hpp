/*
 * File: midia.hpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#ifndef MIDIA_HPP
#define MIDIA_HPP
#include <string>
using namespace std;

class Midia {
protected:
	string titulo;
	string autor;
	int ano_lancamento;
	int tipoDeMidia;

public:
	Midia();
	Midia(string umTitulo, string umAutor, int umAno, int umTipoDeMidia);
	string getTitulo();
	void setTitulo(string umTitulo);
	string getAutor();
	void setAutor(string umAutor);
	int getAno_Lancamento();
	void setAno_Lancamento(int umAno);
	int getTipoDeMidia();
	void setTipoDeMidia(int umTipoDeMidia);
};
#endif /* MIDIA_HPP */
