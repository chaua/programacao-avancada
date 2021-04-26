#pragma once

#include "produto.h"

class Calca : public Produto {
public:
    Calca(int id, int preco) : Produto(id, "calca", preco) {}

    void imprime() const
    {
        cout << "=CALCA=...: " << _id << endl;
        cout << "> preco...: " << _preco << endl;
    }
};
