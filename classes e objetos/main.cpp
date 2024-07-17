#include "Pessoas.hpp"


int main(){

    std::cout << "\n";

    Pessoa *pessoa1 = new Pessoa("Joao", 18, 60.700, 1.70);

    std::cout << "Nome: " << pessoa1->getNome() << "\n" << "Idade: " << pessoa1->getIdade() << "\n" << "Peso: " << pessoa1->getPeso() << "\n" << "Altura: " << pessoa1->getAltura() << "\n";

    delete(pessoa1);

    std::cout << "\n";

    Pessoa *pessoa2 = new Pessoa("Maria", 22, 62.350, 1.62);
    pessoa2->setAltura(1.68);
    pessoa2->setNome("Maria joana");
    std::cout << "Nome: " << pessoa2->getNome() << "\n" << "Idade: " << pessoa2->getIdade() << "\n" << "Peso: " << pessoa2->getPeso() << "\n" << "Altura: " << pessoa2->getAltura() << "\n";


    delete(pessoa2);

    std::cout << "\n";

    return 0;

}