#pragma once

#include "tabuleiro.h"

class Tela {
public:
    void desenhaTabuleiro(Tabuleiro *tabuleiro);
    void desenhaMenu();
    void leituraTabuleiro(int &linha, int &coluna);
};
