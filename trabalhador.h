#ifndef TRABALHADOR_H_INCLUDED
#define TRABALHADOR_H_INCLUDED

#include "Habilidades.h"
#include "Data.h"
#include <vector>

using namespace std;

class Trabalhador : public Pessoa {
    private:
        Habilidades habilidade;
        int indice;
        Data Datas[365];
    public:
        Trabalhador();
        Trabalhador(int idade, string nome, string cpf, string contato);

        void verHabilidade();
        void setHabilidade(bool En, bool Ja, bool Pe, bool El, bool De);
        void OcupaData(Data DataNova);
        void setValor();

        void VerDatasOcupadas();
        void Preencher(Data VData, int valor);

};

#endif // TRABALHADOR_H_INCLUDED
