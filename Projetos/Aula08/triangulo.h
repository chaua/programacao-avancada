#pragma once

#include "poligono.h"

class Triangulo : public Poligono {
public:
    Triangulo(int *lados = nullptr) : Poligono(3, lados) {}

    int calcularArea() {
        // TODO: calcular a area
        return 0;
    }

    void desenhar() {
        for (int i = 0; i < _lados[0]; i++) {
            for (int j = 0; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};