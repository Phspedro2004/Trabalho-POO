#include "Pessoa.h"
#include "Endereco.h"
#include "Endereco.cpp"

int Pessoa::getIdade()
{
    return idade;
}
string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getCpf()
{
    return cpf;
}
string Pessoa::getContato()
{
    return contato;
}

void Pessoa::setIdade( int Vidade){
    idade = Vidade;
}
void Pessoa::setNome( string Vnome){
    nome = Vnome;
}
void Pessoa::setCPF( string VCpf){
    cpf = VCpf;
}
void Pessoa::setContato( string VContato){
    contato = VContato;
}
void Pessoa::setEndereco(string VBairro, string VCidade, string VRua, int VNumero, string VComplemento){
    endereco.setCidade(VCidade);
    endereco.setBairro(VBairro);
    endereco.setRua(VRua);
    endereco.setNumero(VNumero);
    endereco.setComplemento(VComplemento);
}

void Pessoa::imprimirPessoa() {
  cout << "\n Nome:\t" << this->getNome();
  cout << "\n Idade:\t" << this->getIdade();
  cout << "\n Cpf:\t" << this->getCpf();
  cout << "\n Contato:\t" << this->getContato();
  cout << "\n --Endereco--\t";
  endereco.imprimirEndereco();
}

Pessoa::Pessoa() {}
Pessoa::Pessoa(int idade, string nome, string cpf, string contato) :   idade(idade), nome(nome), cpf(cpf), contato(contato) {}
