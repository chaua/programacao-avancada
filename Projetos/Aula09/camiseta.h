#pragma once

#include "produto.h"

class Camiseta : public Produto {
public:
    Camiseta(int id, string marca, int preco) : Produto(id, "camiseta", preco), _marca(marca) {}

    void imprimeMarca() {
        cout << "Marca = " << _marca << endl;
    }

    void imprime() const {
        cout << "=CAMISETA=: " << _id << endl;
        cout << "> Marca...: " << _marca << endl;
        cout << "> preco...: " << _preco << endl;
    }

private:
    string _marca;
};
