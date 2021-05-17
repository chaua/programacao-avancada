#include <iostream>
using namespace std;

#include "retangulo.h"
#include "data.h"

void desenha(const Retangulo &retangulo) {
    for (int i = 0; i < retangulo._altura; i++) {
        for (int j = 0; j < retangulo._largura; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Classe amiga
// - Libera o acesso interno da classe para outra classe
class A {
public:
    A() : _a(0) {} 

    // Declara uma classe amiga <3
    friend class B;
private:
    int _a;
};

class B {
public:
    void setA(A &a) {
        a._a = 1000;
    }

    void getA(A &a) {
        cout << a._a << endl;
    }

};

// Atividade:
// - Criar uma classe Tempo(hora, minuto, segundo) - apenas com contrutor (atributos todos privados)
// - Tempo eh amiga da classe Data
// - Na classe Data, criar uma funcao imprime(Tempo &) que imprime a data completa
//   dd/mm/aaaa hh:MM:ss


int main() {
    Retangulo ret(2, 3);
    desenha(ret);

    Data data;
    cout << "Digite uma data: ";
    cin >> data;
    cout << "A data eh: " << data << endl;

    A a;
    B b;
    b.getA(a);
    b.setA(a);
    b.getA(a);

    return 0;
}