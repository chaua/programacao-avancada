#include <iostream>
#include <iomanip>
using namespace std; // soh pode usar uma vez por bloco

#include "data.h"

int x;
void inc(int i) { x += i; } 

namespace Numero {
    int x;
    void inc(int i) {
        x += i;
    }
}

int main(int argc, char const *argv[]) {
    cout << "Alo, mamae!" << endl;
    
    // NAMESPACES
    ::x = 100; // acessa a variavel global x
    ::inc(10); // acessa a funcao global x

    Numero::x = 200; // acessa a variavel do namespace Numero
    Numero::inc(20); // acessa a funcao do namespace Numero

    // ENTRADA / SAIDA
    int valor = 0;

    cout << "Digite um valor: ";
    cin >> valor;

    cerr << "ERRO! " << valor << endl;

    cout << setw(20) << valor << endl;
    cout << setfill('.') << setw(20) << valor << endl;
    cout << right << setfill('.') << setw(20) << valor << endl;
    cout << left << setfill('.') << setw(20) << valor << endl;

    cout << setprecision(2) << 3.14151 << endl;

    cout.precision(2);
    
    cout << fixed << 3.14151 << endl;
    cout << scientific << 3.14151 << endl;

    return 0;
}

