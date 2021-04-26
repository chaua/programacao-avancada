#pragma once

#include "tabuleiro.h"

class JogoDaVida {
public:
    JogoDaVida() {
        // TODO: instanciar os objetos
    }

    void executa();

private:
    Tabuleiro *_atual;
    Tabuleiro *_novo;

    void _aplicarRegras(int i, int j);
};