#ifndef HABILIDADES_H_INCLUDED
#define HABILIDADES_H_INCLUDED
using namespace std;

class Habilidades {
    private:
        bool Encanador;
        bool Jardineiro;
        bool Pedreiro;
        bool Eletricista;
        bool Dedetizador;
    public:
        Habilidades();
        Habilidades(bool Encanador, bool Jardineiro, bool Pedereiro, bool Eletricista, bool Dedetizador);

        void setHabilidades(bool En, bool Ja, bool Pe, bool El, bool De);

        void getHabilidades();
};

#endif // HABILIDADES_H_INCLUDED
