#include "heranca_multipla.h"


// Relacionamento entre classes
//   - Associação...: geral 
//   - Agregação....: contém <>
//   - Composição...: contém <> fechado
//   - Herança......: é um <|

// CarrinhoCompras <>---- Produto
//               1       10

// class Produto {};

// class ItemDeVenda {};

// class CarrinhoCompras {

//     ~CarrinhoCompras() {
//         // Destroi itens de venda
//     }

//     void criarVenda();
//     void adiciona(Produto);

// private:
//     Produto _produto[10];
//     ItemDeVenda *_itensDeVenda;
// };


// Herança Multipla
//  - Nem toda linguagem implementa 
//  - Gera problemas dificeis de serem resolvidos
//  - Diamante Morte <>






int main() {
    // Homem homem("Homer");
    // homem.andar();

    cout << "---" << endl;

    // SuperHomem superHomem("Clark");
    // superHomem.andar();

    HomemAranha peter = string("Peter Parker");
    cout << "---" << endl;

    peter.soltaTeia();
    cout << "---" << endl;

    peter.andar();  // chamada sobrescrita
    cout << "---" << endl;

    peter.Homem::andar();   // Solucao 2: chamada sem ambiguidade pra classe Homem
    cout << "---" << endl;
    //peter.Aranha::andar();   // chamada sem ambiguidade pra classe Aranha

    cout << "---" << endl;

    return 0;
}