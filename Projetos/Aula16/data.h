#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class Data {
public:
    Data() : _dia(0), _mes(0), _ano(0) {}
    Data(int dia, int mes, int ano) : _dia(dia), _mes(mes), _ano(ano) {}

    // Libera o acesso para as funcoes amigas do ostream
    friend ostream &operator<<(ostream &os, Data &data);
    friend istream &operator>>(istream &is, Data &data);

private:
    int _dia, _mes, _ano;
};

inline ostream &operator<<(ostream &os, Data &data) {
    os << setfill('0') << setw(2) << data._dia << "/";
    os << setfill('0') << setw(2) << data._mes << "/";
    os << data._ano << endl;
    return os;
}

inline istream &operator>>(istream &is, Data &data) {
    char sep;
    is >> data._dia >> sep >> data._mes >> sep >> data._ano;
    return is;
}
