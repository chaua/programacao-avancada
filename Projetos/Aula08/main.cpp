
#include "poligono.h"
#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"

// Classes abstratas
//  - Serve para abstracao de outras Classes
//  - Serve de base apenas para criar outras classes 
//  - Nao pode ser instanciada
// Para criar uma classa abstrata, ela deve possuir pelo menos 1 metodo abstrato
//  - Metodo abstrato = metodo sem implementacao

int main() {
    int l3[] = {2, 2, 3};
    int l4[] = {2, 3, 2, 3};
    int l5[] = {2, 2, 2, 2};

    // Esta solução funciona - tipo do poligono fica como flag
    // - problema: tipificação fica solta
    //             permite erros de logica 
    //Poligono triangulo(3, l3);
    //triangulo.calcularArea();
    //Poligono retangulo(4, l4);
    //Poligono quadrado(4, l5);
    
    Triangulo tri(l3);
    cout << tri.calcularPerimetro() << endl;
    cout << tri.calcularArea() << endl;
    tri.desenhar();

    Retangulo ret(l4);
    cout << ret.calcularPerimetro() << endl;
    cout << ret.calcularArea() << endl;
    ret.desenhar();

    Quadrado qua(l5);
    cout << qua.calcularPerimetro() << endl;
    cout << qua.calcularArea() << endl;
    qua.desenhar();
}