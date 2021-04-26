#pragma once

#include <iostream>
using namespace std;

class Poligono {
public:
    Poligono(int nLados, int *lados) : _nLados(nLados), _lados(lados) { }
    
    int calcularPerimetro() const {
        int perimetro = 0;
        for (int i = 0; i < _nLados; i++) {
            perimetro += _lados[i];
        }
        return perimetro;
    }

    // triangulo: (base * altura) / 2
    // retangulo: (base * altura)
    // pentagono: (5 * lado * altura)
    // hexagono:  (3 * lado * lado * sqrt(3)) / 2
    virtual int calcularArea() = 0; // metodo abstrato

    // metodo virtual puro
    virtual void desenhar() = 0; // metodo abstrato

protected:
    int _nLados;
    int *_lados;
};


// ---
// Simulacao de uma interface
class Imprimivel {
public:
    virtual void imprime() = 0;
}

class Aluno : public Imprimivel {
public:
    void imprime() {}
};
// ---
