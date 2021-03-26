#pragma once

#include <string>

using namespace std;

class Pessoa {
public:
    Pessoa(string nome, int idade = 0) : _nome(nome), _idade(idade) {
    }

    string getNome() const {
        return _nome;
    }

    int getIdade() const {
        return _idade;
    }

    void setNome(string nome) {
        _nome = nome;
    }

    void setIdade(int idade) {
        _idade = idade;
    }


private:
    string _nome;
    int _idade;
};