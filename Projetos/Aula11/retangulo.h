#pragma once

// Funcoes amigas
// - eh uma funcao que eh implementada fora da classe, mas possui total acesso 
//   aos atributos e metodos privados da classe


class Retangulo {
public:
    Retangulo(int largura, int altura) : _altura(altura), _largura(largura) {}

    // Liberando o acesso interno da classe para a funcao desenha
    friend void desenha(const Retangulo &retangulo);

private:
    int _altura;
    int _largura;
};
