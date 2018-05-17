	/*
 * File: biblioteca.hpp
 *  Created on: 15 de maio de 2018
 *      Author: LUCAS
 */

#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <vector>
using namespace std;
#include "midia.hpp"
#include "livro.hpp"
#include "cd.hpp"
#include "dvd.hpp"

class Biblioteca {

protected:
	vector<Midia*> midias;
	int quantidadeLivros;
	int quantidadeCDs;
	int quantidadeDVDs;

public:
	Biblioteca();
	int getQuantidadeLivros();
	void setQuantidadeLivros(int umaQuantidade);
	int getQuantidadeCDs();
	void setQuantidadeCDs(int umaQuantidade);
	int getQuantidadeDVDs();
	void setQuantidadeDVDs(int umaQuantidade);
	void inserirMidia();
	Midia* buscarMidia(string umNome, int umTipoDeMidia);
	void removerMidia();
	void detalharMidia(Midia* umaMidia);
	void editarMidia();
	void verAcervo();
	void verEstatisticas();
	~Biblioteca();
};

#endif /*BIBLIOTECA_HPP*/
