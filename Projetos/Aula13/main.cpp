#include <iostream>
#include <string>

#include <vector>
#include <deque>
#include <list>

#include <algorithm>

using namespace std;

// STL: STANDARD TEMPLATE LIBRARY
// - todas classes e funcoes estao no namespace std
// - implementacao das principais estruturas de dados e algoritmos
// EDs:
// - vetor
// - fila
// - pilha
// - lista
// - deque
// - mapa/dicionario [Chave] => valor
// - conjuntos

// Padrao de projetos: Iterator
// - Define uma interface para iterar sobre uma colecao
// - Uso: foreach / para cada
// - um ponteiro que a cada iteracao assume um elemento da colecao
// PARA CADA x EM [1, 2, 3, 4]:
//   IMPRIME(x)


int main() {

    // == VECTOR ==
    vector<int> v1;     // vetor vazio
    vector<int> v2(5);  // vetor de tamanho 5
    vector<int> v3(5, -999); // vetor de tamanho 5 inicializado com -999
    vector<int> v4(v3.begin(), v3.end());

    // Adiciona elementos ao final do vetor
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);

    // Acesso aleatorio
    v2[0] = 100;
    v2[1] = 200;
    v2[2] = v2[0] + v2[1];
    v2.push_back(1000);

    // Tamanho da colecao
    cout << "Tamanho de v1: " << v1.size() << endl;
    cout << "Tamanho de v2: " << v2.size() << endl;

    // Percorre um vetor - modo via indice
    for (int i = 0; i < v1.size(); i++) {
        cout << "v1[" << i << "] = " << v1[i] << endl; 
    }

    // Percorre um vetor - modo via iterador
    vector<int>::iterator it2;

    // ligature: algumas fontes tem representacao especial para alguns conjuntos de
    // caracteres (Jetbrains Mono) 
    for (it2 = v2.begin(); it2 != v2.end(); it2++) {
        cout << "*it2 = " << *it2 << endl;
    }

    // Tipificacao automatica: compilador infere o tipo de dados
    auto valor1 = 10;              // int
    auto valor2 = 'z';             // char
    auto valor3 = "teste";         // const char *
    auto valor4 = string("teste"); // std::string

    for (auto it3 = v3.begin(); it3 != v3.end(); it3++) {
        cout << "*it3 = " << *it3 << endl;
    }

    // Extensao do C++-11
    // for (int &it4 : v4) {
    //     cout << "it4 = " << it4 << endl;
    // }

    // == DEQUE ==
    // - ED do tipo fila duplamente encadeada

    deque<string> d1;

    d1.push_back("abacate");
    d1.push_back("melao");
    d1.push_front("laranja");
    d1.push_front("melancia");

    for (auto it = d1.begin(); it != d1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    cout << "Primeiro elemento: " << d1[0] << endl;
    cout << "Segundo elemento.: " << d1[1] << endl;
    cout << "Terceiro elemento: " << d1.at(2) << endl;

    // == ALGORITMOS ==
    cout  << "== SORT ==" << endl;
    sort(d1.begin(), d1.end()); // Precisa ter o operador < definido

    for (auto it = d1.begin(); it != d1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    cout << "== REVERSE ==" << endl;
    reverse(d1.begin(), d1.end());

    for (auto it = d1.begin(); it != d1.end(); it++)    {
        cout << *it << ", ";
    }
    cout << endl;

    cout << "== RANDOM SHUFFLE ==" << endl;
    random_shuffle(d1.begin(), d1.end());

    for (auto it = d1.begin(); it != d1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    // FILA e PILHA
    d1.pop_back();  // Retira o ultimo elemento
    d1.pop_front(); // Retira o primeiro elemento
   
   cout << "Primeiro elemento: " << d1.front() << endl;
   cout << "Ultimo elemento: " << d1.back() << endl;

    // == LIST ==
    // - ED do tipo lista duplamente encadeada

    list<string> l1(d1.begin(), d1.end());

    l1.push_front("maca");
    l1.push_front("pera");
    l1.push_front("melancia");

    l1.push_front("melao");
    l1.push_front("laranja");
    l1.push_front("maracuja");

    for (auto it = l1.begin(); it != l1.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;

    // Remover elementos
    //l1.pop_back();
    //l1.pop_front();
    l1.remove("maca"); // Remove todas ocorrencias (==)

    // Algoritmos comuns
    l1.sort();
    for (auto it = l1.begin(); it != l1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    l1.unique(); // remove elementos sequenciais duplicados
    for (auto it = l1.begin(); it != l1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;

    l1.reverse();
    for (auto it = l1.begin(); it != l1.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;
}