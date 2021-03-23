#include <iostream>

#include "retangulo.h"

using namespace std;

Retangulo::Retangulo() {
    _base = 0;
    _altura = 0;
}

Retangulo::Retangulo(int lado) {
    _base = lado >= 0 ? lado : 0;
    _altura = lado >= 0 ? lado : 0;
}

Retangulo::Retangulo(int base, int altura) {
    // Modos de tratamento de RN
    //   - Tratamento silencioso: impede que o objeto fique invalido, e nao avisa ngm
    //   - Tratamento com excecao: avisa que deu erro, avisa quem criou o objeto
    //   - Imprime erro: tela, log, etc. 
    _base = base >= 0 ? base : 0;
    _altura = altura >= 0 ? altura : 0;
}

// DESTRUTOR: 
//   - liberar recursos
//   - mesmo nome da classe iniciado com ~, sem tipo de retorno
Retangulo::~Retangulo() {
    cout << "Desalocando objeto (" << _base << ", " << _altura << ")" << endl; 
}

// ACESSORES / MUTANTES
//   - Usados para ler ou escrever nos atributos
//   - Getters: acessa valor do atributo
//   - Setter:  altera o valor do atributo
int Retangulo::getBase() {
    return _base;
}

int Retangulo::getAltura() {
    return _altura;
}

void Retangulo::setBase(int base) {
    _base = base >= 0 ? base : 0;
}

void Retangulo::setAltura(int altura) {
    _altura = altura >= 0 ? altura : 0;
}

// METODOS GERAIS
int Retangulo::calcularArea() {
    return _base * _altura;
}

int Retangulo::calcularPerimetro() {
    return 2 * _base + 2 * _altura;
}

void Retangulo::desenhar() {
    for (int i = 0; i < _base; i++) {
        for (int j = 0; j < _altura; j++) {
            cout << "* ";
        }
        cout << endl;    
    }
}

