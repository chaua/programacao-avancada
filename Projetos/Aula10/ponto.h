#pragma once

#include <iostream>
#include <cmath>
using namespace std;

// Sobrecarga de operadores
//   - abstracao do codigo -> legibilidade
//   - computacao cientifica

// Regras
//   - So eh possivel sobrescrever operadores validos em C++ (@, ~, ==>)
//   - Ordem de precedencia permanece a mesma
//   - Multiplicidade permanece a mesma: operador binario continua binario  (a / b)
//   - Nao pode sobrescrever . :: ?:

// Boas praticas
//   - Manter o proposito original do operador: +
//   - Nao atribuir significados obscuros: [] = ordenacao

class Ponto {
public:
    Ponto() : _x(0), _y(0) {}
    Ponto(int x, int y) : _x(x), _y(y) {}

    // P = P1 + P2
    //   = (1, 1) + (2, 2) = (3, 3)
    Ponto soma(const Ponto &outro) {
        return Ponto(_x + outro._x, _y + outro._y);
    }

    Ponto subt(const Ponto &outro) {
        return Ponto(_x - outro._x, _y - outro._y);
    }

    // P = *this + outro
    Ponto operator+(const Ponto &outro) {
        return Ponto(_x + outro._x, _y + outro._y);
    }

    Ponto operator-(const Ponto &outro) {
        return Ponto(_x - outro._x, _y - outro._y);
    }

    Ponto operator*(const Ponto &outro) {
        return Ponto(_x * outro._x, _y * outro._y);
    }

    Ponto operator*(const int escalar) {
        return Ponto(_x * escalar, _y * escalar);
    }

    Ponto operator/(const Ponto &outro) {
        return Ponto(_x / outro._x, _y / outro._y);
    }

    Ponto operator%(const Ponto &outro) {
        return Ponto(_x % outro._x, _y % outro._y);
    }

    Ponto operator^(const int escalar) {
        return Ponto(pow(_x, escalar), pow(_y, escalar));
    }

    bool operator==(const Ponto &outro) {
        return _x == outro._x && _y == outro._y;
    }

    bool operator!=(const Ponto &outro) {
        return !operator==(outro);
    }

    bool operator>(const Ponto &outro) {
        return _x > outro._x && _y > outro._y;
    }

    Ponto operator-() {
        return Ponto(-_x, -_y);
    }

    bool operator!() {
        return _x == 0 && _y == 0;
    }

    // pre-fixo: ++ponto
    // a = ++b + c;
    Ponto& operator++() {
        ++_x;
        ++_y;
        return *this;
    }

    // pos-fixo: ponto++
    Ponto operator++(int) {
        Ponto antigo(_x, _y);
        ++_x;
        ++_y;
        return antigo;
    }

    // Operadores de atribuicao
    // a = b = c
    Ponto& operator=(Ponto const &outro) {
        _x = outro._x;
        _y = outro._y;
        return *this;
    }

    void operator+=(Ponto const &outro) {
        _x += outro._x;
        _y += outro._y;
    }

    // p1[0]
    int operator[](int i) { 
        if (i == 0) return _x;
        else if (i == 1) return _y;
        return -1;
    }

    void operator()(int x, int y) {
        _x = x;
        _y = y;
    } 



    void imprime() const
    {
        cout << "P(" << _x << ", " << _y << ")" << endl;
    }

private:
    int _x;
    int _y;
};