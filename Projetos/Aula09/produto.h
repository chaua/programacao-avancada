#pragma once

#include <iostream>
#include <string>
using namespace std;

class Produto {
public:
    Produto(int id = 0, string nome = "", float preco = 0.0f) : _id(id), 
                                                                _nome(nome),
                                                                _preco(preco) {} 

    virtual ~Produto() {}

    virtual void imprime() const {
        cout << "  Produto.: " << _id << endl;
        cout << "> Nome....: " << _nome << endl;
        cout << "> preco...: " << _preco << endl;
    }

    // virtual void teste() = 0;

protected:
    int _id;
    string _nome;
    float _preco;
};
