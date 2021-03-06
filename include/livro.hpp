/*
 * File: livro.hpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#ifndef LIVRO_HPP
#define LIVRO_HPP
#include "midia.hpp"

class Livro: public Midia {
protected:
	string editora;
	string isbn;

public:
	Livro();
	Livro(string umTitulo, string umAutor, int umAno, string umaEditora,
			string umISBN);
	string getEditora();
	void setEditora(string umaEditora);
	string getISBN();
	void setISBN(string umISBN);
};

#endif /* LIVRO_HPP */
