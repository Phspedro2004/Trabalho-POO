#include "trabalhador.h"
#include "Data.h"
#include "Data.cpp"
#include "Habilidades.h"
#include "Habilidades.cpp"
#include <iostream>
#include <vector>


using namespace std;

void Trabalhador::verHabilidade()
{
    habilidade.getHabilidades();
}

void Trabalhador::setHabilidade(bool En, bool Ja, bool Pe, bool El, bool De){
    habilidade.setHabilidades(En,Ja,Pe,El,De);
}

void Trabalhador::setValor(){
        indice++;
}

void Trabalhador::VerDatasOcupadas(){

    cout << "Datas Ocupadas: \n";
    for(int i = 0; i < indice; i++){
        cout << "   " << Datas[i].getDia() << "/" << Datas[i].getMes() << "/" << Datas[i].getAno() << " \n ";
    }
    if (indice == 0){
        cout << "Nao tem nada aqui\n";
    }
    cout << "mostrou as datas :3\n";

}

void Trabalhador::Preencher(Data VData, int valor)
{
    bool repete = false;
    for (int i = 0; i < indice; i++) {
        if (this->Datas[i].getDia() == VData.getDia() && this->Datas[i].getMes() == VData.getMes() && this->Datas[i].getAno() == VData.getAno()){
            repete = true;
            cout << "oi amigo :3\n";
        }
    }
    if(repete == false){
        Datas[indice].setDia(VData.getDia());
        Datas[indice].setMes(VData.getMes());
        Datas[indice].setAno(VData.getAno());

        cout << VData.getDia() << " - VDATA \n\n";
        cout << Datas[indice].getDia() << "/" << Datas[indice].getMes() << "/" << Datas[indice].getAno() << "- Datas 0 \n\n";
        setValor();
        cout << indice << " -- ocupado sem valor \n\n";
        cout << "AQUI EM CIMA OLHA ELE ELE TA AQUI OLHA ELE AQUI\n";
    }
}


Trabalhador::Trabalhador() {}
Trabalhador::Trabalhador(int idade, string nome, string cpf, string contato) : Pessoa(idade,nome,cpf,contato) {}


