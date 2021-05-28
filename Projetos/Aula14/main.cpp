#include <iostream>
#include <string>
using namespace std;

#include <set>
#include <map>
#include <vector>




int main() {

    // Conteineres associativos
    // - Conjunto (SET)
    // - Mapa (MAP)
    
    // 1. Nao existe ordem
    // 2. Nao existe repeticao
    
    // == SET ==
    // Conjunto segue a mesma logica da matematica
    // - operacao: saber se o elemento esta ou nao no conjunto
    
    // Implementacao: HASH O(1) ou ARVORE O(log(n))
    // | 2 |  | 5 |  |  => 5, 2, 2

    set<int> s1;

    s1.insert(9);
    s1.insert(9);
    s1.insert(9);
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(-999);
    s1.insert(-9);
    s1.insert(16);
    s1.insert(4);

    cout << "Tamanho: " << s1.size() << endl; // imprime 4

    for (auto it = s1.begin(); it != s1.end(); it++) {
        cout << "elemento: " << *it << endl;
    }

    // Remove um elemento do conjunto
    s1.erase(16);

    cout << "Removendo 16:" << endl;
    for (auto it = s1.begin(); it != s1.end(); it++){
        cout << "elemento: " << *it << endl;
    }

    // Verifica se um elemento existe no conjunto
    // set<int>::iterator it;
    auto it = s1.find(2);

    if (it != s1.end()) {
        cout << "Encontrou o 2: " << *it << endl;
    }

    if (s1.find(1000) == s1.end()) {
        cout << "Nao encontrou o 1000" << endl;
    }

    // == MAP ==
    // Tb conhecido como dicionario ou vetor associativo $vet["banana"] = 12;
    // Realiza um mapeamento chave => valor
    // A chave deve ser unica!!

    map<int, float> m1;

    m1.insert(pair<int, float>(1, 3.99));
    m1.insert(pair<int, float>(8, 78.99));
    m1.insert(pair<int, float>(-2, 12.99));
    m1.insert(pair<int, float>(-2, 45)); // ignora a insercao

    m1[77] = 0.0001;
    m1[54] = 0.08;
    m1[-34] = 4543;
    m1[-2] = 88;

    for (auto it = m1.begin(); it != m1.end(); it++) {
        cout << "m1[" << it->first << "] = " << it->second << endl;
    }

    map<string, float> m2;
    m2["jaca"] = 19.99;
    m2["laranja"] = 99.99;
    m2["banana"] = 1.99;

    cout << m2["banana"] << endl;
    //cout << m2["abacate"] << endl;

    cout << m2.count("abacate") << endl;

    if (m2.count("abacate")) {
        cout << "Tem abacate" << endl;
    } else  {
        cout << "Nao tem abacate" << endl;
    }

    // Atividade:
    // - Criar uma classe Produto(id, nome, preco)
    //   - sobrescrever operador <
    // - Criar uma lista de produtos
    // - Adicionar 5 produtos
    // - Imprimir a lista ordenada pelo preco

    // - Criar um mapa
    //   - Chave: nome do produto
    //   - Valor: preco do produto



}


