#include "Endereco.h"

int Endereco::getNumero()
{
    return numero;
}
string Endereco::getRua()
{
    return rua;
}
string Endereco::getBairro()
{
    return bairro;
}
string Endereco::getCidade()
{
    return cidade;
}
string Endereco::getComplemento()
{
    return complemento;
}
/////////////////////////////////////////////////
void Endereco::setNumero( int Vnumero){

    numero = Vnumero;
}
void Endereco::setRua( string VRua){

    rua = VRua;
}
void Endereco::setBairro( string VBairro){

    bairro = VBairro;
}
void Endereco::setCidade( string VCidade){

    cidade = VCidade;
}
void Endereco::setComplemento( string VComplemento){

    complemento = VComplemento;
}
////////////////////////////////////////////////
void Endereco::imprimirEndereco() {
  cout << "\n Cidade:\t" << this->getCidade();
  cout << "\n Bairro:\t" << this->getBairro();
  cout << "\n Rua:\t" << this->getRua();
  cout << "\n Numero:\t" << this->getNumero();
  cout << "\n Complemento:\t" << this->getComplemento();
}

Endereco::Endereco() {}
Endereco::Endereco(int numero, string rua, string bairro, string cidade, string complemento) :   numero(numero), rua(rua), bairro(bairro), cidade(cidade), complemento(complemento) {}
