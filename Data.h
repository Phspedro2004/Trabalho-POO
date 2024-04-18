#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        Data();
        Data(int dia, int mes, int ano);

        int getDia();
        int getMes();
        int getAno();
        int getData();
        void setData(int &Vdia, int &Vmes, int &Vano);
        void imprimir();

};


#endif // DATA_H_INCLUDED
