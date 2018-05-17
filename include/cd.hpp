/*
 * File: cd.hpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#ifndef CD_HPP
#define CD_HPP
#include<iostream>
#include "midia.hpp"

class CD: public Midia {
protected:
	int quantidadeFaixas;
	string gravadora;

public:
	CD();
	CD(string umTitulo, string umAutor, int umAno, int umaQuantidade,
			string umaGravadora);
	int getQuantidadeFaixas();
	void setQuantidadeFaixas(int umaQuantidade);
	string getGravadora();
	void setGravadora(string umaGravadora);
};

#endif /* CD_HPP */
