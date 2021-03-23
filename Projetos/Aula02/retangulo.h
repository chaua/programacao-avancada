#ifndef _RETANGULO_H_
#define _RETANGULO_H_

// Pilares da O.O.
//  - Encapsulamento
//     - somente o objeto pode manipular seus atributos
//     - modificadores de acesso: public, private, protected
//  - Heranca
//  - Polimorfismo

// Classe: 
//  - Classificação de objetos (conceito)
// Objetos:
//  - Entidades que existem (atributos e metodos)
//  - Concretas (alunos, carro) ou Abstratas (Aula) ou Processo (Preencher diario de classe)

// Por padrao a visibilidade da classe eh private!
// Na O.O., atributos sempre sao privados!

class Retangulo {
public:
    // CONSTRUTORES: 
    //   - inicializar o objeto: atributos
    //   - mesmo nome da classe, sem tipo de retorno
    Retangulo();
    Retangulo(int lado);
    Retangulo(int base, int altura);

    // DESTRUTOR: 
    //   - liberar recursos
    //   - mesmo nome da classe iniciado com ~, sem tipo de retorno
    ~Retangulo();
    
    // ACESSORES / MUTANTES
    //   - Usados para ler ou escrever nos atributos
    //   - Getters: acessa valor do atributo
    //   - Setter:  altera o valor do atributo
    int getBase();
    int getAltura();

    void setBase(int base);
    void setAltura(int altura);

    // METODOS GERAIS
    int calcularArea();
    int calcularPerimetro();
    void desenhar();

private:
    // ATRIBUTOS
    int _base;
    int _altura;
};

#endif
