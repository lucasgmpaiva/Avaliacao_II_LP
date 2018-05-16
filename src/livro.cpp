/*
 * File: livro.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#include "../include/livro.hpp"

Livro::Livro(){

}

Livro::Livro(string umaEditora, string umISBN){
	this->editora = umaEditora;
	this->isbn = umISBN;
}

string Livro::getEditora(){
	return this->editora;
}

void Livro::setEditora(string umaEditora){
	this->editora = umaEditora;
}

string Livro::getISBN(){
	return this->isbn;
}

void Livro::setISBN(string umISBN){
	this->isbn = umISBN;
}
