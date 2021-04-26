#pragma once

#include "conta.h"

// Na heranca, todos metodos sao herdados 
//  - mas nem todos sao visiveis (private)

// Modificador de heranca:
//  - public:
//       - public no pai     -> public no filho
//       - protected no pai  -> protected no filho
//       - private no pai    -> private no filho (nao acessa)
//  - protected:
//       - public no pai     -> protected no filho
//       - protected no pai  -> protected no filho
//       - private no pai    -> private no filho (nao acessa)
//  - private:
//       - public no pai     -> private no filho (nao acessa)
//       - protected no pai  -> private no filho (nao acessa)
//       - private no pai    -> private no filho (nao acessa)

class ContaCorrente : public Conta {
public:
    ContaCorrente(int numero, int agencia) : Conta(numero, agencia) {}

};