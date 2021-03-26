#include <iostream>

#include "produto.h"
#include "carrinho.h"

#include "pessoa.h"

using namespace std;

// Macro: 
//   - nao gera registro de ativacao na pilha
//   - construcao eh complexa
//   - sem validacao de tipos
#define MULT(x, y) ((x) * (y))


// Funcoes inline
//   - processadas em tempo de compilacao
//   - nao gera registro de ativacao
//   - tem validacao de tipos
//   - usadas para trechos simples de codigo
//   - afeta o tempo de compilacao
inline int mult(int x, int y) {
    return x * y;
}

// CImg: inline


int main() {
    Produto p1(100);
    Carrinho carrinho(p1);

    cout << MULT(1 + 2, 3) << endl;
    cout << mult(1 + 2, 3) << endl;

    // Variaveis que nao podem mudar valor
    //  - Validacao de tipos 
    const float PI = 3.14;
    // PI = 13; // ERRO!!!

    const Pessoa pessoa("Homer Simpson", 40);
    //pessoa.setNome("Homem Aranha");

    cout << pessoa.getNome() << endl;

    return 0;
}