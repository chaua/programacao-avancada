#include <iostream>

#include "retangulo.h"

using namespace std;

int main() {

    Retangulo r1;         // chama o construtor vazio/default Retangulo()
    Retangulo r2(2, 2);   // chama o construtor com inicializacao Retangulo(base, altura)
    
    Retangulo r3(3);
    Retangulo r4 = 4;      // chama o construtor com um unico parametro

    Retangulo r5(r2);       // chama o construtor de copia Retangulo(Retangulo)
    Retangulo r6 = r5;

    Retangulo *r7 = new Retangulo();
    Retangulo *r8 = new Retangulo(8, 9);

    {
        Retangulo r9(9, 9);
    }

    delete r7;
    delete r8;

    r1.setBase(10);
    r1.setAltura(20);

    return 0;
}



