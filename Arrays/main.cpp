#include <iostream>
#include <string>
#include <vector>

int main(){
    // Vetor de tamanho fixo
    int numeros[5];

    numeros[0] = 10;

    std::cout << "\n";
    // Vetor sem tamanho fixo definido tem que ter seus valores já declarado
    std::string meuArray[] = {"Joao", "Maria", "Pedro"};
    int size = sizeof(meuArray)/sizeof(meuArray[0]);

    for(int i = 0; i < size; i++){

        std::cout << meuArray[i] << "\n";

    }

    system("pause");
    return 0;
}