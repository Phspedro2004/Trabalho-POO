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

int Trabalhador::getOcupado(){
    return Ocupado;
}

void Trabalhador::VerDatasOcupadas(){

    cout << "Datas Ocupadas: \n";
    for(int i = 0; i < Ocupado; i++){
        cout << "   " << Datas[i].getDia() << "/" << Datas[i].getMes() << "/" << Datas[i].getAno() << " \n ";
    }
    if (Ocupado == 0){
        cout << "Não tem nada aqui\n";
    }
    cout << Ocupado << "\n";
    cout << "mostrou as datas :3\n";

}

void Trabalhador::OcupaData(Data DataNova){

    this->Datas[Ocupado] = DataNova;
    Ocupado++;
    cout << Ocupado << "\n";
    cout << "Inseriu com sucesso :3\n";
}

void Trabalhador::Preencher(Data VData)
{
    bool repete = false;
    for (int i = 0; i < Ocupado; i++) {
        if (this->Datas[i].getDia() == VData.getDia() && this->Datas[i].getMes() == VData.getMes() && this->Datas[i].getAno() == VData.getAno()){
            repete = true;
            cout << "oi amigo :3\n";
        }
    }
    if(repete == false){
        OcupaData(VData);
    }
}


Trabalhador::Trabalhador() {}
Trabalhador::Trabalhador(int idade, string nome, string cpf, string contato, int Ocupado, int dia, int mes, int ano) : Pessoa(idade,nome,cpf,contato), Ocupado(Ocupado), dia(dia), mes(mes), ano(ano) {}

