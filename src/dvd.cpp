/*
 * File: dvd.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#include "../include/dvd.hpp"

DVD::DVD(){ // @suppress("Class members should be properly initialized")

}

DVD::DVD(int umaDuracao, string umaClassificacao){
	this->duracao = umaDuracao;
	this->classificacao = umaClassificacao;
}

int DVD::getDuracao(){
	return this->duracao;
}

void DVD::setDuracao(int umaDuracao){
	this->duracao = umaDuracao;
}

string DVD::getClassificacao(){
	return this->classificacao;
}

void DVD::setClassificacao(string umaClassificacao){
	this->classificacao = umaClassificacao;
}
