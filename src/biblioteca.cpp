/*
 * File: biblioteca.cpp
 *  Created on: 15 de maio de 2018
 *      Author: LUCAS
 */

#include <iostream>
using namespace std;
#include "../include/biblioteca.hpp"

Biblioteca::Biblioteca() { // @suppress("Class members should be properly initialized")
	this->quantidadeCDs = 2;
	this->quantidadeDVDs = 2;
	this->quantidadeLivros = 2;

	Livro * domCasmurro1 = new Livro();
	domCasmurro1->setTitulo("Dom Casmurro");
	domCasmurro1->setAutor("Machado de Assis");
	domCasmurro1->setEditora("Companhia das Letras");
	domCasmurro1->setAno_Lancamento(1899);
	domCasmurro1->setISBN("9789726700357");
	domCasmurro1->setTipoDeMidia(0);
	Midia * domCasmurro = domCasmurro1;
	this->midias.push_back(domCasmurro);

	Livro * guiaMochileiro1 = new Livro();
	guiaMochileiro1->setTitulo("O Guia do Mochileiro das Galáxias");
	guiaMochileiro1->setAutor("Douglas Adams");
	guiaMochileiro1->setEditora("Pan Books");
	guiaMochileiro1->setAno_Lancamento(1979);
	guiaMochileiro1->setISBN("9780517693117");
	guiaMochileiro1->setTipoDeMidia(0);
	Midia * guiaMochileiro = guiaMochileiro1;
	this->midias.push_back(guiaMochileiro);

	CD* saladDays1 = new CD();
	saladDays1->setTitulo("Salad Days");
	saladDays1->setAutor("Mac DeMarco");
	saladDays1->setGravadora("Captured Tracks");
	saladDays1->setAno_Lancamento(2014);
	saladDays1->setQuantidadeFaixas(11);
	saladDays1->setTipoDeMidia(1);
	Midia* saladDays = saladDays1;
	this->midias.push_back(saladDays);

	CD* tranquilityBase1 = new CD();
	tranquilityBase1->setTitulo("Tranquility Base Hotel & Casino");
	tranquilityBase1->setAutor("Arctic Monkeys");
	tranquilityBase1->setGravadora("Domino Records");
	tranquilityBase1->setAno_Lancamento(2018);
	tranquilityBase1->setQuantidadeFaixas(11);
	tranquilityBase1->setTipoDeMidia(1);
	Midia* tranquilityBase = tranquilityBase1;
	this->midias.push_back(tranquilityBase);

	DVD* pulpFiction1 = new DVD();
	pulpFiction1->setTitulo("Pulp Fiction");
	pulpFiction1->setAutor("Quentin Tarantino");
	pulpFiction1->setDuracao(178);
	pulpFiction1->setAno_Lancamento(1994);
	pulpFiction1->setClassificacao("Não recomendado para menores de 18 anos");
	pulpFiction1->setTipoDeMidia(2);
	Midia* pulpFiction = pulpFiction1;
	this->midias.push_back(pulpFiction);

	DVD* letBe1 = new DVD();
	letBe1->setTitulo("Let It Be - The Beatles (Documentary)");
	letBe1->setAutor("Michael Lindsay-Hogg");
	letBe1->setDuracao(81);
	letBe1->setAno_Lancamento(1970);
	letBe1->setClassificacao("Livre para todos os públicos");
	letBe1->setTipoDeMidia(2);
	Midia* letBe = letBe1;
	this->midias.push_back(letBe);
}

Biblioteca::~Biblioteca() {
}

int Biblioteca::getQuantidadeLivros() {
	return this->quantidadeLivros;
}

void Biblioteca::setQuantidadeLivros(int umaQuantidade) {
	this->quantidadeLivros = umaQuantidade;
}

int Biblioteca::getQuantidadeCDs() {
	return this->quantidadeCDs;
}

void Biblioteca::setQuantidadeCDs(int umaQuantidade) {
	this->quantidadeCDs = umaQuantidade;
}

int Biblioteca::getQuantidadeDVDs() {
	return this->quantidadeDVDs;
}

void Biblioteca::setQuantidadeDVDs(int umaQuantidade) {
	this->quantidadeDVDs = umaQuantidade;
}

void Biblioteca::inserirMidia() {
	cout << "|---------------Inserção de Mídia-----------------|\n" << endl;
	cout << "Informe o número referente ao tipo de mídia que deseja inserir"
			<< endl << "0. Livro;" << endl << "1. CD;" << endl
			<< "2. DVD;" << endl << "Digite aqui: ";
	int tipoMidia;
	cin >> tipoMidia;
	if (tipoMidia == 0) {
		cin.ignore();
		int anoLivro;
		string tituloLivro, autor, editora, isbn;
		cout << "Informe o título do livro: " << endl;
		getline(cin, tituloLivro);
		cout << "Informe o autor do livro: " << endl;
		getline(cin, autor);
		cout << "Informe o editora do livro: " << endl;
		getline(cin, editora);
		cout << "Informe o isbn do livro: " << endl;
		getline(cin, isbn);
		cout << "Informe o ano de lançamento do livro: " << endl;
		cin >> anoLivro;

		Livro * livro = new Livro;
		livro->setTitulo(tituloLivro);
		livro->setAutor(autor);
		livro->setEditora(editora);
		livro->setAno_Lancamento(anoLivro);
		livro->setISBN(isbn);
		livro->setTipoDeMidia(0);

		Midia* midiaLivro = livro;
		for (int i = 0; i < (int) this->midias.size(); i++) {
			if (this->midias[i]->getTitulo() == midiaLivro->getTitulo()
					&& this->midias[i]->getTipoDeMidia()
							== midiaLivro->getTipoDeMidia()) {
				cout << "ERRO! A biblioteca já possui essa midia!" << endl;
				cout << "________________________________________" << endl;
				return;
			}
		}
		this->midias.push_back(midiaLivro);
		this->quantidadeLivros++;

		cout << "Livro inserido com sucesso!" << endl;
	}

	else if (tipoMidia == 1) {
		cin.ignore();
		int anoCD, quantidadeFaixas;
		string tituloCD, compositor, gravadora;
		cout << "Informe o nome do álbum: " << endl;
		getline(cin, tituloCD);
		cout << "Informe o artista/banda do álbum: " << endl;
		getline(cin, compositor);
		cout << "Informe a gravadora do álbum: " << endl;
		getline(cin, gravadora);
		cout << "Informe a quantidade de faixas do álbum: " << endl;
		cin >> quantidadeFaixas;
		cout << "Informe o ano de lançamento do álbum: " << endl;
		cin >> anoCD;

		CD * cd = new CD;
		cd->setTitulo(tituloCD);
		cd->setAutor(compositor);
		cd->setGravadora(gravadora);
		cd->setAno_Lancamento(anoCD);
		cd->setQuantidadeFaixas(quantidadeFaixas);
		cd->setTipoDeMidia(1);
		Midia* midiaCD = cd;

		for (int i = 0; i < (int) this->midias.size(); i++) {
			if (this->midias[i]->getTitulo() == midiaCD->getTitulo()
					&& this->midias[i]->getTipoDeMidia()
							== midiaCD->getTipoDeMidia()) {
				cout << "ERROR! A biblioteca já possui essa midia!";
				return;
			}
		}
		this->midias.push_back(midiaCD);
		this->quantidadeCDs++;

		cout << "CD inserido com sucesso!" << endl;

	} else if (tipoMidia == 2) {
		cin.ignore();
		int anoDVD, duracao;
		string tituloDVD, diretor, classificacao;
		cout << "Informe o nome do filme: " << endl;
		getline(cin, tituloDVD);
		cout << "Informe o diretor do filme: " << endl;
		getline(cin, diretor);
		cout << "Informe a classificação indicativa do filme: " << endl;
		getline(cin, classificacao);
		cout << "Informe a duração do filme (em minutos): " << endl;
		cin >> duracao;
		cout << "Informe o ano de lançamento do filme: " << endl;
		cin >> anoDVD;

		DVD * dvd = new DVD;
		dvd->setTitulo(tituloDVD);
		dvd->setAutor(diretor);
		dvd->setDuracao(duracao);
		dvd->setAno_Lancamento(anoDVD);
		dvd->setClassificacao(classificacao);
		dvd->setTipoDeMidia(2);

		Midia* midiaDVD = dvd;

		for (int i = 0; i < (int) this->midias.size(); i++) {
			if (this->midias[i]->getTitulo() == midiaDVD->getTitulo()
					&& this->midias[i]->getTipoDeMidia()
							== midiaDVD->getTipoDeMidia()) {
				cout << "ERROR! A biblioteca já possui essa midia!";
				cout << "_______________________________________" << endl;
				return;
			}
		}
		this->midias.push_back(midiaDVD);
		this->quantidadeDVDs++;

		cout << "DVD inserido com sucesso!" << endl;

	} else {
		cout << "ERROR! Tipo de mídia desconhecido!" << endl;
	}

	cout << "_______________________________________" << endl;

}

Midia* Biblioteca::buscarMidia(string umNome, int umTipoDeMidia) {
	for (int i = 0; i < (int) this->midias.size(); i++) {
		if (this->midias[i]->getTitulo() == umNome
				&& this->midias[i]->getTipoDeMidia() == umTipoDeMidia) {
			return this->midias[i];
		}
	}

	return NULL;
}

void Biblioteca::removerMidia() {
	cin.ignore();
	int tipoMidia;
	string nome;
	cout <<"|--------------Remoção de Mídia---------------|" << endl;
	cout << "Informe o nome da mídia que deseja remover: " << endl;
	getline(cin, nome);
	cout << "Informe o tipo de mídia que deseja remover(0 - Livro; 1 - CD; 2 - DVD): " << endl;
	cin >> tipoMidia;
	Midia* midiaPraDeletar = this->buscarMidia(nome, tipoMidia);
	if (!midiaPraDeletar) {
		cout << "ERROR! Mídia inexistente." << endl;
		cout <<"_______________________________________" << endl;
		return;
	}
	for (int i = 0; i < (int) this->midias.size(); i++) {
		if (this->midias[i]->getTitulo() == midiaPraDeletar->getTitulo()
				&& this->midias[i]->getTipoDeMidia()
						== midiaPraDeletar->getTipoDeMidia()) {
			if (midiaPraDeletar->getTipoDeMidia() == 0) {
				this->quantidadeLivros--;
			} else if (midiaPraDeletar->getTipoDeMidia() == 1) {
				this->quantidadeCDs--;
			} else if (midiaPraDeletar->getTipoDeMidia() == 2) {
				this->quantidadeDVDs--;
			}
			this->midias.erase(midias.begin() + i);
			break;
		}
	}

	cout << "Mídia removida da biblioteca com sucesso!" << endl;
	cout <<"_______________________________________" << endl;

}

void Biblioteca::detalharMidia(Midia* umaMidia) {
	if (umaMidia->getTipoDeMidia() == 0) {
		Livro* aux = (Livro*) umaMidia;
		cout << "------------Livro--------------" << endl << "Título: "
				<< aux->getTitulo() << ";" << endl << "Autor: "
				<< aux->getAutor() << ";" << endl   << "Editora: "
				<< aux->getEditora() << ";" << endl << "ISBN: "
				<< aux->getISBN() << ";" << endl << "Ano de Lançamento: "
				<< aux->getAno_Lancamento() << "." << endl
				<< "______________________________" << endl;

	} else if (umaMidia->getTipoDeMidia() == 1) {
		CD* aux = (CD*) umaMidia;
		cout << "-------------CD---------------" << endl << "Título: "
				<< aux->getTitulo() << ";" << endl << "Banda/Artista: "
				<< aux->getAutor() << ";" << endl  << "Gravadora: "
				<< aux->getGravadora() << ";" << endl << "Número de Faixas: "
				<< aux->getQuantidadeFaixas() << ";" << endl << "Ano de Lançamento: "
				<< aux->getAno_Lancamento() << "." << endl
				<< "_____________________________" << endl;
	} else if (umaMidia->getTipoDeMidia() == 2) {
		DVD* aux = (DVD*) umaMidia;
		cout << "-------------DVD---------------" << endl << "Título: "
				<< aux->getTitulo() << ";" << endl << "Diretor: "
				<< aux->getAutor() << ";" << endl << "Classificação Indicativa: " 
				<< aux->getClassificacao()<< ";" << endl << "Duração: " 
				<< aux->getDuracao() << " minutos;" << endl << "Ano de Lançamento: "
				<< aux->getAno_Lancamento() << "." << endl 
				<< "____________________________" << endl;
	}
}

void Biblioteca::editarMidia() {
	cin.ignore();
	int tipoMidia;
	string nome;
	cout << "|--------------Edição de Mídia--------------|"  << endl;
	cout << "Informe o nome da mídia que deseja editar: " << endl;
	getline(cin, nome);
	cout << "Informe o tipo de mídia que deseja editar(0 - Livro; 1 - CD; 2 - DVD): " << endl;
	cin >> tipoMidia;

	Midia* midiaPraEditar = this->buscarMidia(nome, tipoMidia);
	if (midiaPraEditar) {
		cin.ignore();
		cout << "O estado atual desta mídia é:" << endl;
		this->detalharMidia(midiaPraEditar);
		if (midiaPraEditar->getTipoDeMidia() == 0) {
			Livro* livroEditado = (Livro*) midiaPraEditar;

			cout << "Informe o novo título:" << endl;
			string novoTitulo;
			getline(cin, novoTitulo);
			livroEditado->setTitulo(novoTitulo);

			cout << "Informe o novo autor:" << endl;
			string novoAutor;
			getline(cin, novoAutor);
			livroEditado->setAutor(novoAutor);

			cout << "Informe a nova editora:" << endl;
			string novaEditora;
			getline(cin, novaEditora);
			livroEditado->setEditora(novaEditora);
			cout << "Informe o novo IBSN:" << endl;

			string novoibsn;
			getline(cin, novoibsn);
			livroEditado->setISBN(novoibsn);

			cout << "Informe o novo ano de lançamento:" << endl;
			int novoAno;
			cin >> novoAno;
			livroEditado->setAno_Lancamento(novoAno);

		} else if (midiaPraEditar->getTipoDeMidia() == 1) {
			CD* cdEditado = (CD*) midiaPraEditar;

			cout << "Informe o novo título:" << endl;
			string novoTitulo;
			getline(cin, novoTitulo);
			cdEditado->setTitulo(novoTitulo);

			cout << "Informe o novo banda/artista:" << endl;
			string novoAutor;
			getline(cin, novoAutor);
			cdEditado->setAutor(novoAutor);

			cout << "Informe a nova gravadora:" << endl;
			string novaGravadora;
			getline(cin, novaGravadora);
			cdEditado->setGravadora(novaGravadora);

			cout << "Informe a nova quantidade de faixas:" << endl;
			int faixas;
			cin >> faixas;
			cdEditado->setQuantidadeFaixas(faixas);

			cout << "Informe o novo ano de lançamento:" << endl;
			int novoAno;
			cin >> novoAno;
			cdEditado->setAno_Lancamento(novoAno);

		} else if (midiaPraEditar->getTipoDeMidia() == 2) {
			DVD* dvdEditado = (DVD*) midiaPraEditar;

			cout << "Informe o novo título:" << endl;
			string novoTitulo;
			getline(cin, novoTitulo);
			dvdEditado->setTitulo(novoTitulo);

			cout << "Informe o novo diretor:" << endl;
			string novoAutor;
			getline(cin, novoAutor);
			dvdEditado->setAutor(novoAutor);

			cout << "Informe a nova classificação etária:" << endl;
			string novaClassificacao;
			getline(cin, novaClassificacao);
			dvdEditado->setClassificacao(novaClassificacao);

			cout << "Informe o novo ano de lançamento:" << endl;
			int novoAno;
			cin >> novoAno;
			dvdEditado->setAno_Lancamento(novoAno);

			cout << "Informe a nova duração:" << endl;
			int novaDuracao;
			cin >> novaDuracao;
			dvdEditado->setDuracao(novaDuracao);

		}

		cout << "Mídia editada com sucesso!" << endl;
	} else {
		cout << "ERROR! Mídia informada inexistente!" << endl;
	}

	cout << "_______________________________________________" << endl;
}

void Biblioteca::verAcervo() {
	cout <<"|--------------Acervo da Biblioteca--------------|" << endl;
	for (int i = 0; i < (int) this->midias.size(); i++) {
		this->detalharMidia(this->midias[i]);
	}
	cout << "________________________________________________" << endl;
}

void Biblioteca::verEstatisticas() {
	cout << "------------------- Estatísticas da Biblioteca -------------------"
			<< endl;
	cout << "Existem: " << this->quantidadeLivros << " livros em nosso acervo;"
			<< endl;
	cout << "Existem: " << this->quantidadeCDs << " CD's em nosso acervo;"
			<< endl;
	cout << "Existem: " << this->quantidadeDVDs << " DVD's em nosso acervo."
			<< endl;
	cout << "__________________________________________________________________"<< endl;
}
