#pragma once

#include "retangulo.h"

class Quadrado : public Retangulo {
public:
    Quadrado(int *lados = nullptr) : Retangulo(lados) {
        // TODO: verificar se todos os lados sao iguais
     }

     int calcularArea(){
         return _lados[0] * _lados[0];
     }
};