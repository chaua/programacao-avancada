#ifndef _RETANGULO_H_
#define _RETANGULO_H_

// Modelo de dados
struct Retangulo {
    int base;
    int altura;
};

// Operacoes sobre o modelo
void inicializar(Retangulo *r);
void inicializar(Retangulo *r, int base, int altura);

int calcularArea(Retangulo r);
int calcularPerimetro(Retangulo r);
void desenhar(Retangulo r);

#endif
