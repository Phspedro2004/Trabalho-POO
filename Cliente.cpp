#include "Cliente.h"
#include "Data.h"
#include "Contrato.h"

void Cliente::contratar(Data DataContratar, int Contratado, ListaTrabalhadores Lista){

    novoContrato.RealizarContrato(Contratado,DataContratar,Lista);

}

void Cliente::verLista(ListaTrabalhadores Lista){

    Lista.verTrabalhadores();
}

Trabalhador::Trabalhador() {}
Trabalhador::Trabalhador(int idade, string nome, string cpf, string contato) : Pessoa(idade,nome,cpf,contato) {}
