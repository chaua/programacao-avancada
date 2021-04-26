#pragma once

#include <iostream>
using namespace std;

class Conta {
public:
    Conta(int numero, int agencia) : _numero(numero), _agencia(agencia), _saldo(0) {}

    void deposita(float quantia) {
        _saldo += int(quantia * 100);
    }

    void retira(float quantia){
        _saldo -= int(quantia * 100);
    }

    void imprimeExtrato() {
        cout << "CONTA....: " << _numero << endl;
        cout << "AGENCIA..: " << _numero << endl;
        cout << "SALDO....: " << getSaldo() << endl;
    }

    float getSaldo() {
        return _saldo / 100.0f;
    }

private:
    int _numero;
    int _agencia;
    int _saldo;
};