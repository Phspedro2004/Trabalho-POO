
#include "Contrato.h"
#include "Data.h"
#include "Trabalhador.h"
#include "ListaTrabalhadores.h"

 void Contrato::RealizarContrato(int Contratado, Data DataContrato, ListaTrabalhadores Lista, int valor){

    Lista.trabalhadores[Contratado].Preencher(DataContrato, valor);

 }

