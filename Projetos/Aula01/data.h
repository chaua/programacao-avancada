#ifndef _DATA_H_
#define _DATA_H_

// includes necessarios para .h
#include <string>

// constantes e macros
// tipos enumerados
enum Naipe {
    COPAS, OURO, ESPADAS, ARVOREZINHA
};

// apelidos: typedef
typedef unsigned char uchar;

// namespaces

// modelo de dados
struct Data {
    int dia, mes, ano;
};

// prototipos de funcoes
void inicializaData(Data *data);
void imprimeData(Data data);
Data somaDatas(Data data1, Data data2);
Data converteData(std::string data);

// NUNCA! Implementacao de funcoes!!!

#endif
