/*
 * File: cd.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#include "../include/cd.hpp"


CD::CD() { // @suppress("Class members should be properly initialized")

}

CD::CD(string umTitulo, string umAutor, int umAno, int umaQuantidade,
		string umaGravadora) {
	this->titulo = umTitulo;
	this->autor = umAutor;
	this->ano_lancamento = umAno;
	this->quantidadeFaixas = umaQuantidade;
	this->gravadora = umaGravadora;
	this->tipoDeMidia = 1;
}

int CD::getQuantidadeFaixas() {
	return this->quantidadeFaixas;
}

void CD::setQuantidadeFaixas(int umaQuantidade) {
	this->quantidadeFaixas = umaQuantidade;
}

string CD::getGravadora() {
	return this->gravadora;
}

void CD::setGravadora(string umaGravadora) {
	this->gravadora = umaGravadora;
}

