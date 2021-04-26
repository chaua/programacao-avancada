#include "produto.h"
#include "camiseta.h"
#include "calca.h"
#include "bone.h"


// Orientacao a Objetos
// - Encapsulamento
//    - atributo sempre privado / protegido
//    - coesao.......: objeto faz somente uma coisa e bem feita (alta)
//    - acoplamento..: dependencia entre objetos (baixo) 
// - Herança
//    - é um / é uma (is a)
//    - Herança múltipla: uma classe herda de mais de uma classe base
//    - Classe abstrata
//        - possui pelo menos um metodo abstrato: metodo sem implementacao
//        - nao pode ser instanciada 
//        - serve como base para outras classes
//    - Interfaces
//        - nao tem atributos
//        - nao pode ser instanciada
//        - estabelece um contrato para as classes
//        - Conjunto de metodos abstratos que a classe se obriga a implementa-los
// - Polimorfismo
//        - parametrico: metodos com mesmo nome e parametros diferentes
//              void andar();
//              void andar(int velocidade)
//        - templates (tipo generico): 
//              vector<int>
//              vector<string>
//        - sobrescrita de metodos
//        - referência

int main() {
    Produto p1(1, "bermuda", 100);
    Camiseta c1(2, "Generica", 200);
    Calca c2(3, 400);

    Produto lista[] = {p1, c1, c2};

    // c1.imprimeMarca();
    // p1 = c1;
    // p1.imprime();
    //p1.imprimeMarca();

    Produto *ptr = &p1;
    ptr->imprime();
    ptr = &c1;
    ptr->imprime();
    ptr = &c2;
    ptr->imprime();

    cout << endl << endl;

    //Bone b1(4, 800);
    //Bone *b2 = new Bone(5, 800);
    //delete b2;

    ptr = new Bone(6, 900);
    delete ptr;


}