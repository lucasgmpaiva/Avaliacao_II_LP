/*
 * File: cd.hpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#ifndef CD_HPP
#define CD_HPP
#include "midia.hpp"

class CD: public Midia {
private:
	int quantidadeFaixas;
	string gravadora;

public:
	CD();
	CD(int umaQuantidade, string umaGravadora);
	int getQuantidadeFaixas();
	void setQuantidadeFaixas(int umaQuantidade);
	string getGravadora();
	void setGravadora(string umaGravadora);

};

#endif /* CD_HPP */
