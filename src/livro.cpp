/*
 * File: livro.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#include "../include/livro.hpp"

Livro::Livro() {

}

Livro::Livro(string umTitulo, string umAutor, int umAno, string umaEditora,
		string umISBN) {
	this->titulo = umTitulo;
	this->autor = umAutor;
	this->ano_lancamento = umAno;
	this->editora = umaEditora;
	this->isbn = umISBN;
	this->tipoDeMidia = 0;
}

string Livro::getEditora() {
	return this->editora;
}

void Livro::setEditora(string umaEditora) {
	this->editora = umaEditora;
}

string Livro::getISBN() {
	return this->isbn;
}

void Livro::setISBN(string umISBN) {
	this->isbn = umISBN;
}
