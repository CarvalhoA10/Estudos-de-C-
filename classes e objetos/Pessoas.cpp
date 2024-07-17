#include "Pessoas.hpp"

Pessoa::Pessoa(std::string nome, int idade, float peso, float altura){
    this->nome = nome;
    this->idade = idade;
    this->peso = peso;
    this->altura = altura;
};

Pessoa::~Pessoa(){
    std::cout << "Objeto destruido" << "\n";
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setPeso(float peso){
    this->peso = peso;
}

void Pessoa::setAltura(float altura){
    this->altura = altura;
}

std::string Pessoa::getNome(){
    return this->nome;
}

int Pessoa::getIdade(){
    return this->idade;
}

float Pessoa::getPeso(){
    return this->peso;
}

float Pessoa::getAltura(){
    return this->altura;
}