#include <iostream>

class Pessoa{

    public:
        Pessoa(std::string nome, int idade, float peso, float altura);
        ~Pessoa();

        void setNome(std::string nome);
        void setIdade(int idade);
        void setPeso(float peso);
        void setAltura(float altura);

        std::string getNome();
        int getIdade();
        float getPeso();
        float getAltura();

    private:
        std::string nome;
        int idade;
        float peso;
        float altura;

};