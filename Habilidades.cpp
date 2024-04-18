#include "Habilidades.h"

void Habilidades::getHabilidades()
{
    cout << "\n";
    cout << " ---Habilidades--- \n";
    if(Encanador) {
        cout << " Encanador\n";
    }
    if(Jardineiro){
        cout << " Jardineiro\n";
    };
    if(Pedreiro){
        cout<< " Pedreiro\n";
    };
    if(Eletricista){
        cout << " Eletricista\n";
    };
    if(Dedetizador){
        cout << " Dedetizador\n";
    };
    cout << "\n";
}
void Habilidades::setHabilidades(bool En, bool Ja, bool Pe, bool El, bool De){

    Encanador = En;
    Pedreiro = Pe;
    Dedetizador = De;
    Eletricista = El;
    Jardineiro = Ja;

}

Habilidades::Habilidades() {}
Habilidades::Habilidades(bool Encanador, bool Eletricista, bool Pedreiro, bool Jardineiro, bool Dedetizador) :   Encanador(Encanador), Eletricista(Eletricista), Pedreiro(Pedreiro), Jardineiro(Jardineiro), Dedetizador(Dedetizador) {}
