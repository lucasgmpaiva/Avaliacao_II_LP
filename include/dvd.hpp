/*
 * File: dvd.hpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */

#ifndef DVD_HPP
#define DVD_HPP
#include "midia.hpp"

class DVD: public Midia {
protected:
	int duracao;
	string classificacao;

public:
	DVD();
	DVD(string umTitulo, string umAutor, int umAno, int umaDuracao, string umaClassificacao);
	int getDuracao();
	void setDuracao(int umaDuracao);
	string getClassificacao();
	void setClassificacao(string umaClassificacao);
};

#endif /* DVD_HPP*/
