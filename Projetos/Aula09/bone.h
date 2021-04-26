#pragma once

#include "produto.h"

class Bone : public Produto {
public:
    Bone(int id, float preco) : Produto(id, "bone", preco) {
        cout << "Alocando bastante memoria" << endl;
    }

    ~Bone() {
        cout << "Desalocando toda memoria" << endl;
    }
};
