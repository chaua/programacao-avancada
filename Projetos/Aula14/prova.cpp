#include <iostream>
using namespace std;

class VetorInt {
public:
    VetorInt(int tam) : _dados(nullptr), _tamanho(tam) {
        _dados = new int[tam];
    }

    virtual ~VetorInt() {
        delete[] _dados;
    }

    // res = v1 + v2
    VetorInt operator+(const VetorInt &outro) const {
        VetorInt res(_tamanho);
        // ...
    }

private:
    int *_dados;
    int _tamanho;

};

class Imprimivel {

};

// d1 + d2
class Data : protected VetorInt, public Imprimivel {

    // dd/mm/aaaa -> iomanip

};

int main() {
    Data* datas[1000];

    for (int i = 0; i < 31; i++) {
        datas[i] = new Data(i + 1, 1, 2021);
    }

    // desalacar !!!

}
