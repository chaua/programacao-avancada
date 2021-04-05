#include <iostream>

#include "pessoa.h"

using namespace std;

class Aluno {
public:
    Aluno(float nota = 0) : _nota(nota) { }

    void setNota(float nota) {
        _nota = nota >= 0 && nota <= 10 ? nota : _nota;
    }

    float getNota() const {
        return _nota;
    }

private:
    float _nota;
};


void incrementaA(int a) {    // Passagem de parametro por copia
    a++;  // 1
}

void incrementaB(int *b) {   // Passagem por referencia
    (*b)++;
}

void incrementaC(int &c) {   // Passagem por referencia
    c++;
}


void calculaNotaA(Aluno a) {    // a = Aluno(aluno) - Chama o construtor de copia da classe Aluno
    a.setNota(10);
}

void calculaNotaB(Aluno *b) {   // Passagem por referencia
    (*b).setNota(7);
    b->setNota(7);
}

void calculaNotaC(Aluno &c) {   // Passagem por referencia 
    c.setNota(10);
}

void imprimeNotaC(const Aluno &c) {
    //c.setNota(10);  // ERRO!! pq o objeto eh constante
}

// void imprimeNotaB(const Aluno *b) {
//     Aluno a;
//     b = &a;         // ERRO
//     *b = Aluno();   // ERRO
//     // ...
// }


int main() {
    int x = 0;
    incrementaA(x);     // x = 0
    incrementaB(&x);    // x = 1
    incrementaC(x);     // x = 2

    Aluno aluno;
    calculaNotaA(aluno);    // _nota = 0
    calculaNotaB(&aluno);   // _nota = 7
    calculaNotaC(aluno);    // _nota = 10

    // Tipo Referencia
    //  - Variavel recebe um endereco de memoria na inicializacao
    //  - O endereco da variavel nao muda
    //  - Usada para a passagem de parametros
    //  - Objetos sempre passamos por referencia!!!
    int &y = x;
    y = 100;    // x = 100

    // int &z;  // ERRO!

    Pessoa p1;
    p1.imprimeNome();

    Pessoa p2("Homer", "Simpson");
    p2.imprimeNome();



    return 0;
}