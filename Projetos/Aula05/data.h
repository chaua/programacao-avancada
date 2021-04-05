#pragma once

#include <iostream>
using namespace std;

class Data {
public:
    Data(int dia = 0, int mes = 0, int ano = 0) : _dia(dia),
                                                  _mes(mes),
                                                  _ano(ano) {
        cout << "Criando data: " << dia << "/" << mes << "/" << ano << endl;
    }

    void setData(int dia, int mes, int ano) {
        _dia = dia;
        _mes = mes;
        _ano = ano;
    }

    void imprime() const {
        cout << _dia << "/" << _mes << "/" << _ano << endl;
    }

private:
    int _dia;
    int _mes;
    int _ano;
};
