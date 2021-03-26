#include <iostream>
#include "produto.h"

using namespace std;

Produto::Produto() {
    _id = 0;
    cout << "Inicializando produto " << _id << endl;
}

Produto::Produto(int id) {
    _id = id;
    cout << "Inicializando produto " << _id << endl;
}
