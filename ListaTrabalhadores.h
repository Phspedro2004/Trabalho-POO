#ifndef LISTATRABALHADORES_H_INCLUDED
#define LISTATRABALHADORES_H_INCLUDED

#include "Endereco.h"
#include "Trabalhador.h"

using namespace std;
class ListaTrabalhadores {
    private:
        int Ocupado = 0;
    public:
        Trabalhador trabalhadores[100];

        ListaTrabalhadores();
        ListaTrabalhadores(int Ocupado);

        void verTrabalhadores();
        Trabalhador GetTrabalhadores();
        void AddTrabalhadores(Trabalhador trabalhadorNovo);
};

#endif // LISTATRABALHADORES_H_INCLUDED
