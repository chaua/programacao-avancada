#pragma once

#include "produto.h"

class Carrinho {
public:
    Carrinho(Produto produto) : _produto(produto) {
    }


private:
    Produto _produto;
    int _quantidade;
};