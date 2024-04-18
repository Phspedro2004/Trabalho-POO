#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include "Endereco.h"
#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    protected:
        int idade;
        string nome;
        string cpf;
        string contato;
        Endereco endereco;
    public:
        Pessoa();
        Pessoa(int idade, string nome, string cpf, string contato);

        int getIdade();
        string getNome();
        string getCpf();
        string getContato();
        void setIdade(int Vidade);
        void setNome(string Vnome);
        void setCPF(string Vcpf);
        void setContato(string Vcontato);
        void setEndereco(string VBairro, string VCidade, string VRua, int VNumero, string VComplemento);
        void imprimirPessoa();
};

#endif // PESSOA_H_INCLUDED
