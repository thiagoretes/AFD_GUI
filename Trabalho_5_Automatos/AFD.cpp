#include "AFD.h"

AFD::AFD(string estado_inicial, bool eh_final) {
	this->estado_inicial = this->estado_atual = estado_inicial;
	add_estado(estado_inicial, eh_final);
	add_estado("Estado Invalido", false);//Estado Invalido
}

void AFD::add_estado(string nome_estado, bool eh_final) {
	estados.insert(nome_estado);
	if (eh_final) estados_finais.insert(nome_estado);
}

string AFD::entrada(char entrada) {
	auto tr = make_pair(this->estado_atual, entrada);
	if (this->transicoes.count(tr)>0)
	{
		auto iterador = transicoes.find(tr);//itera a tabela de transicoes
		return this->estado_atual = iterador->second;//retorna a segunda coluna do valor encontrado
	}
	else
	{
		return estado_atual = "Estado Invalido";
	}

}

void AFD::add_transicao(string orig, char entrada, string dest) {
	pair<string, char> teste = make_pair(orig, entrada);

	this->transicoes.insert(make_pair(teste, dest));
}

void AFD::resetar()
{
	this->estado_atual = this->estado_inicial;
}

string AFD::get_estado_atual() {
	return this->estado_atual;
}

bool AFD::eh_aceito() {
	return this->estados_finais.count(this->estado_atual) != 0;
}

bool AFD::eh_aceito(char entrada) {
	auto tr = make_pair(this->estado_atual, entrada);
	if (this->transicoes.count(tr)>0)
	{
		auto iterador = this->transicoes.find(tr);
		return this->estados_finais.count(iterador->second) != 0;

	}
	return false;
}

string AFD::getAlfabeto()
{
	return this->alfabeto;
}

void AFD::setAlfabeto(string input)
{
	this->alfabeto = input;
}