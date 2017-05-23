#pragma once

#include <iostream>
#include <map>
#include <vector>
#include <set>


using namespace std;
class AFD
{
public:
	AFD(string estado_inicial, bool eh_final);
	void add_estado(string nome_estado, bool eh_final);
	void add_transicao(string orig, char entrada, string dest);
	bool eh_aceito();
	bool eh_aceito(char entrada);
	void resetar();
	string get_estado_atual();
	string entrada(char entrada);
	void setAlfabeto(string input);
	string getAlfabeto();

private:
	string alfabeto;
	string estado_inicial;
	string estado_atual;
	set<string> estados;
	set<string> estados_finais;
	map<pair<string, char>, string> transicoes;


};
