#ifndef TRABALHADOR_H_INCLUDED
#define TRABALHADOR_H_INCLUDED

#include "Habilidades.h"
#include "Data.h"
#include <vector>

using namespace std;

class Trabalhador : public Pessoa {
    private:
        Habilidades habilidade;
        int dia;
        int mes;
        int ano;
        int Ocupado;
        Data Datas[365];
    public:
        Trabalhador();
        Trabalhador(int idade, string nome, string cpf, string contato, int Ocupado, int dia, int mes, int ano);

        void verHabilidade();
        void setHabilidade(bool En, bool Ja, bool Pe, bool El, bool De);
        int getOcupado();
        void OcupaData(Data DataNova);
        int addOcupado();

        void setOcupado();

        void VerDatasOcupadas();
        void Preencher(Data VData);

};

#endif // TRABALHADOR_H_INCLUDED
