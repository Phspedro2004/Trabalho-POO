#include <iostream>
#include <windows.h>
#include <string>
#include "Pessoa.cpp"
#include "Trabalhador.cpp"
#include "ListaCliente.cpp"
#include "Contrato.cpp"
#include "Cliente.cpp"
#include "ListaTrabalhadores.cpp"
//#include "Sistema.cpp"

using namespace std;

int main()
{
    int escolha;

    string info;
    string Rua;
    string Bairro;
    string Cidade;
    string Complemento;

    string Contato;
    string Nome;
    string CPF;

    int indice;
    int vetorzin = 0;

    int Numero;
    int Idade;

    bool En;
    bool Ja;
    bool Pe;
    bool El;
    bool De;

    int dia;
    int mes;
    int ano;

    Data data;

    Contrato Teste;
    ListaTrabalhadores ListaT;
    ListaClientes ListaC;

    bool cachorroTemporal = true;
    //Sistema Principal;
    while(cachorroTemporal){

    cout << "insira um valor: \n";
    cout << "1. Criar Trabalhador\n";
    cout << "2. Criar Cliente\n";
    cout << "3. Ver Lista Trabalhadores\n";
    cout << "4. Ver Lista Clientes\n";
    cout << "5. Contratar\n";
    cin >> escolha;
        system("cls");
    if(escolha == 1){

        cout << "insira o nome: ";
        getline(cin >> ws, Nome);
        cout << "insira a idade: ";
        cin >> Idade;
        cout << "insira o endereço: \n";
        cout << "   Rua: ";
        getline(cin >> ws, Rua);
        cout << "   Bairro: ";
        getline(cin >> ws, Bairro);
        cout << "   Cidade: ";
        getline(cin >> ws, Cidade);
        cout << "   Numero: ";
        cin >> Numero;
        cout << "   Complemento: ";
        getline(cin >> ws, Complemento);
        cout << "insira o contato: ";
        getline(cin >> ws, Contato);

        cout << "insira o CPF: ";
        getline(cin >> ws, CPF);
        cout << "insira a Habilidade (faz = 1/nao faz = 0): \n";
        cout << "1.Encanador \n";
        cin >> En;
        cout << "2.Jardineiro \n";
        cin >> Ja;
        cout << "3.Pedreiro \n";
        cin >> Pe;
        cout << "4.Eletricista \n";
        cin >> El;
        cout << "5.Dedetizador \n";
        cin >> De;
        Trabalhador Pessoa1(Idade,Nome,CPF,Contato);
        Pessoa1.setEndereco(Bairro, Cidade, Rua, Numero, Complemento);
        Pessoa1.setHabilidade(En,Ja,Pe,El,De);
        ListaT.AddTrabalhadores(Pessoa1);

    }
    else if(escolha == 2){
        cout << "insira o nome: ";
        getline(cin >> ws, Nome);
        cout << "insira a idade: ";
        cin >> Idade;
        cout << "insira o endereço: \n";
        cout << "   Rua: ";
        getline(cin >> ws, Rua);
        cout << "   Bairro: ";
        getline(cin >> ws, Bairro);
        cout << "   Cidade: ";
        getline(cin >> ws, Cidade);
        cout << "   Numero: ";
        cin >> Numero;
        cout << "   Complemento: ";
        getline(cin >> ws, Complemento);
        cout << "insira o contato: ";
        getline(cin >> ws, Contato);

        cout << "insira o CPF: ";
        getline(cin >> ws, CPF);
        Cliente Pessoa2(Idade,Nome,CPF,Contato);
        Pessoa2.setEndereco(Bairro, Cidade, Rua, Numero, Complemento);
        ListaC.AddCliente(Pessoa2);
    }
    else if(escolha == 3){
        ListaT.verTrabalhadores();
    }
    else if(escolha == 4){
        ListaC.verClientes();
    }
    else if(escolha == 5){

        cout << "insira o Dia: ";
        cin>>dia;
        cout << "insira o Mes: ";
        cin>>mes;
        ano = 2024;
        data.setData(dia,mes,ano);
        cout << "insira o contratado: ";
        cin >> indice;

        Teste.RealizarContrato(indice, data, ListaT, vetorzin);
        vetorzin++;

    }
    cout << "\n";

    }
    return 0;
}
