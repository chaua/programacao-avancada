#pragma once

#include "celula.h"

class Tabuleiro {
public:
    Tabuleiro(int nLinhas, int nColunas) : _matriz(nullptr), 
                                           _nLinhas(nLinhas),
                                           _nColunas(nColunas) {
        // TODO: alocacao dinamica
    }

    ~Tabuleiro() {
        // TODO: liberar memoria
    }

    void inicializaTabuleiro();

    int getLinhas() const {
        return _nLinhas;
    }

    int getColunas() const {
        return _nColunas;
    }

    Celula getCelula(int i, int j) const {
        return _matriz[i][j];
    }

    void vive(int i, int j) {
        _matriz[i][j].vive();
    }

    void morre(int i, int j) {
        _matriz[i][j].morre();
    }

private:
    Celula **_matriz;
    int _nLinhas;
    int _nColunas;
};