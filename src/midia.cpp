/*
 * File: midia.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#include "../include/midia.hpp"

Midia::Midia(){ // @suppress("Class members should be properly initialized")

}

Midia::Midia(string umTitulo, string umAutor, int umAno){
	this->titulo = umTitulo;
	this->autor = umAutor;
	this->ano_lancamento = umAno;
}

string Midia::getTitulo(){
	return this->titulo;
}

void Midia::setTitulo(string umTitulo){
	this->titulo = umTitulo;
}

string Midia::getAutor(){
	return this->autor;
}

void Midia::setAutor(string umAutor){
	this->autor = umAutor;
}

int Midia::getAno_Lancamento(){
	return this->ano_lancamento;
}

void Midia::setAno_Lancamento(int umAno){
	this->ano_lancamento = umAno;
}
