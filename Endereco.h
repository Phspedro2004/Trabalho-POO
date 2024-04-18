#ifndef ENDERECO_H_INCLUDED
#define ENDERECO_H_INCLUDED

using namespace std;
class Endereco{
    private:
        int numero;
        string rua;
        string bairro;
        string cidade;
        string complemento;
    public:
        Endereco();
        Endereco(int numero, string rua, string bairro, string cidade, string complemento);

        int getNumero();
        string getRua();
        string getBairro();
        string getCidade();
        string getComplemento();

        void setNumero(int Vnumero);
        void setRua(string VRua);
        void setBairro(string VBairro);
        void setCidade(string VCidade);
        void setComplemento(string VComplemento);

        void imprimirEndereco();

};

#endif // ENDERECO_H_INCLUDED
