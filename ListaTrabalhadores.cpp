#include "ListaTrabalhadores.h"

void ListaTrabalhadores::AddTrabalhadores(Trabalhador novo){

        trabalhadores[Ocupado] = novo;
        Ocupado++;
}

void ListaTrabalhadores::verTrabalhadores(){

    for(int i = 0; i < Ocupado; i++){
        cout << "Trabalhador " << i << ".-----------------------------------\n";
        trabalhadores[i].imprimirPessoa();
        trabalhadores[i].verHabilidade();
        trabalhadores[i].VerDatasOcupadas();
        cout << "\n";
    }
}


ListaTrabalhadores::ListaTrabalhadores() {}
ListaTrabalhadores::ListaTrabalhadores(int Ocupado) : Ocupado(Ocupado) {}
