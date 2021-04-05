#pragma once

#include <string>
#include <iostream>

using namespace std;

class Pessoa {
public:
    Pessoa(string nome = "", string sobrenome = "") : _nome(nome), _sobrenome(sobrenome) { }

    void imprimeNome() const {
        cout << _nome << " " << _sobrenome << endl;
    }

private:
    string _nome;
    string _sobrenome;
};
