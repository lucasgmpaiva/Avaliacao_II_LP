/*
 * File: main.cpp
 *  Created on: 15 de maio de 2018
 *      Author: Lucas Gabriel
 */
#include "../include/biblioteca.hpp"
#include <iostream>


int main() {
	Biblioteca minhaBiblioteca;
	cout << "|-----------Sistema da Biblioteca Pessoal de Lucas Babriel ---------------|" << endl;
	cout << "Seja bem-vindo! Sinta-se à vontade!" << endl;
	int opcao;
	do{
		cout << "O que gostaria de fazer agora?" << endl;
		cout << "0. Sair do Programa;" << endl;
		cout << "1. Adicionar uma nova mídia;" << endl;
		cout << "2. Remover uma mídia existente;" << endl;
		cout << "3. Editar um mídia existente;" << endl;
		cout << "4. Verificar o acervo da biblioteca;" << endl;
		cout << "5. Ver as estatísticas da biblioteca;" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		cout << "Digite aqui: ";
		cin >> opcao;
		switch (opcao) {
			case 0:
				cout <<"Saindo... :)" << endl;
				cout << "_______________________________________________________________" << endl;
				break;
			case 1:
				minhaBiblioteca.inserirMidia();
				break;
			case 2:
				minhaBiblioteca.removerMidia();
				break;
			case 3:
				minhaBiblioteca.editarMidia();
				break;
			case 4:
				minhaBiblioteca.verAcervo();
				break;
			case 5:
				minhaBiblioteca.verEstatisticas();
				break;
			default:
				break;
		}

	}while(opcao != 0);
	return 0;
}

