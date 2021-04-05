#include "data.h"

int main() {
    Data data1; // 00/00/0000
    Data data2(12, 12, 2012);
    Data data3(12, 12);

    // Alocacao estatica
    cout << "Vetor de datas: " << endl;

    //Data datas[100]; // PROBLEMA: instancia muitos objetos de uma vez soh!
    Data *datas[100];
    datas[0] = &data2;
    datas[1] = &data3;
    datas[2] = new Data(10, 10, 2010);

    // Alocacao dinamica
    cout << "Alocacao dinamica: " << endl;

    Data *data4 = new Data();
    Data *data5 = new Data(11, 11, 2011);
 
    data5->imprime();

    // Alocacao dinamica de vetores
    int *vetor = new int[10];
    vetor[0] = 10;
    vetor[1] = 20;

    delete[] vetor;

    // Alocando as variaveis
    Data **datas2 = new Data*[3];

    for (int i = 0; i < 3; i++) {
        datas2[i] = new Data();
    }

    // Manipulando as variaveis
    for (int i = 0; i < 3; i++) {
        datas2[i]->imprime();
    }

    // Desaloca as variaveis
    for (int i = 0; i < 3; i++) {
        delete datas2[i];
    }
    delete[] datas2;

    delete data4;
    delete data5;
    delete datas[2];

   return 0;
}