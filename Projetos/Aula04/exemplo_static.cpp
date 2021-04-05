#include <iostream>

using namespace std;

int contador() {
    static int cont = 0;    // variavel alocada no contexto global do programa
    cont++;
    return cont;
}

class Eleitor {
public:
    static int numEleitores;

    Eleitor() {
        Eleitor::numEleitores++;  
    }

private:
    // Declaração de constante interna
    const static int MAX_ELEITORES = 10;
};

// Inicializa o membro estático
int Eleitor::numEleitores = 0;

#define FAT(fat, n)                   \
    for (int i = 1; i <= (n); i++) {  \
        fat *= i;                     \
    }                               

int main() {
    Eleitor fred;
    Eleitor velma;
    Eleitor scooby;
    cout << Eleitor::numEleitores << endl;

    int x = 1;
    FAT(x, 5);
    cout << x << endl;
}