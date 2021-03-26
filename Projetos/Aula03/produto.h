#pragma once

#include <iostream>
using namespace std;

// Declaracao de classe inline
//  - implementacao vai no corpo da classe
//  - ou vai no arquivo cabecalho

class Produto {
public:
    Produto(int id = 0);

    int getId() const {
        return _id;
    }

    int compararProduto(const Produto outro) const {
       return _id > outro.getId() ? _id : outro.getId();  
    }



private:
    int _id;
};

inline Produto::Produto(int id) : _id(id) {
    cout << "Inicializando produto " << _id << endl;
}
