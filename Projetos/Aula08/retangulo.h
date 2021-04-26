#pragma once

#include "poligono.h"

class Retangulo : public Poligono {
public:
    Retangulo(int *lados = nullptr) : Poligono(4, lados) { }

    int calcularArea() {
        return _lados[0] * _lados[1];
    }

    void desenhar() {
        for (int i = 0; i < _lados[0]; i++) {
            for (int j = 0; j < _lados[1]; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};