/*
 * File: dvd.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#include "../include/dvd.hpp"

DVD::DVD() { // @suppress("Class members should be properly initialized")

}

DVD::DVD(string umTitulo, string umAutor, int umAno, int umaDuracao,
		string umaClassificacao) {
	this->titulo = umTitulo;
	this->autor = umAutor;
	this->ano_lancamento = umAno;
	this->duracao = umaDuracao;
	this->classificacao = umaClassificacao;
	this->tipoDeMidia = 2;
}

int DVD::getDuracao() {
	return this->duracao;
}

void DVD::setDuracao(int umaDuracao) {
	this->duracao = umaDuracao;
}

string DVD::getClassificacao() {
	return this->classificacao;
}

void DVD::setClassificacao(string umaClassificacao) {
	this->classificacao = umaClassificacao;
}
