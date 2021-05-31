#include <iostream>
#include <iomanip>
#include <string>

#include <list>
#include <vector>
#include <algorithm>

using namespace std;


class Aluno {
public:
    Aluno(string nome, float n1, float n2) : _nome(nome), 
                                            _nota1(n1),
                                            _nota2(n2) {}
    float media() const {
        return (_nota1 + _nota2) / 2;
    }

    string getNome() {
        return _nome;
    }

    bool operator<(const Aluno &outro) const {
        return media() < outro.media();
    }


    friend ostream& operator<<(ostream &os, Aluno &aluno) {
        os << setw(12) << aluno._nome << " - " << aluno.media();
        return os;
    }
 
private:
    string _nome;
    float _nota1;
    float _nota2;
};

// == Ponteiros para funcao ==
//  - atribui o endereco da funcao para uma variavel
//  - permite a passagem de funcoes por parametro

int soma(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}

// == Functors ==
//  - eh um objeto que se comporta como uma funcao
//  - obtido atraves da sobrecarga do operador ()
class ComparaAlunosNome {
public:
    bool operator()(Aluno &a1, Aluno &a2) {
        return a1.getNome() < a2.getNome();
    }
};

class ComparaAlunosNota {
public:
    bool operator()(Aluno &a1, Aluno &a2) {
        return a1.media() > a2.media();
    }
};

int main() {

    vector<Aluno> alunos;
    alunos.push_back(Aluno("Joao", 8.9, 1.2));
    alunos.push_back(Aluno("Pedro", 3.3, 9.2));
    alunos.push_back(Aluno("Marcia", 10, 9.1));
    alunos.push_back(Aluno("Mariana", 8.5, 5.6));
    alunos.push_back(Aluno("Ana", 8.8, 7.0));
    alunos.push_back(Aluno("Jose", 8.0, 8.0));

    cout << "Alunos: " << endl;
    for (int i = 0; i < alunos.size(); i++) {
        cout << alunos[i] << endl;
    }

    sort(alunos.begin(), alunos.end());

    cout << "Alunos - ordenados por nota: " << endl;
    for (int i = 0; i < alunos.size(); i++){
        cout << alunos[i] << endl;
    }

    // Exemplo de ponteiro para funcao
    int (*ptr)(int, int);

    ptr = &soma;
    cout << ptr(10, 20) << endl;

    ptr = &mult;
    cout << ptr(10, 20) << endl;

    // Ordenando objetos via comparator
    ComparaAlunosNome compara;
    compara(alunos[0], alunos[1]);

    sort(alunos.begin(), alunos.end(), compara);

    cout << "Alunos - ordenados por nome: " << endl;
    for (int i = 0; i < alunos.size(); i++) {
        cout << alunos[i] << endl;
    }

    // Ordenando objetos via comparator
    sort(alunos.begin(), alunos.end(), ComparaAlunosNota());

    cout << "Alunos - ordenados por nota: " << endl;
    for (int i = 0; i < alunos.size(); i++) {
        cout << alunos[i] << endl;
    }

    // == Funcoes lambda ==
    //  - Conceito herdado do paradigma funcionalista (Lisp, ADA)
    //  - Permitem a criacao de funcoes locais, sem nome, para serem usadas apenas uma vez
    //
    // SINTAXE:
    //      [captura](parametros) -> tipo_retorno { corpo da funcao }
    //
    //   - captura: variaveis do escopo externo que sao visiveis no escopo interno
    //   - parametros: lista de parametros da funcao
    //   - tipo_retorno: valor que a funcao retorna

    int x = 0;

    auto lambda = [&x](int a, int b) -> int { 
        x = 1000;
        return soma(a, b);
    };

    cout << "lambda: " << lambda(3, 7) << endl;
    cout << "x.....: " << x << endl;

    // Ordenando os alunos com funcao lambda
    sort(alunos.begin(), alunos.end(), [](Aluno &a1, Aluno &a2) -> bool { 
        return a1.media() < a2.media(); 
    });

    cout << "Ordenando os alunos com funcao lambda" << endl;
    for_each(alunos.begin(), alunos.end(), [](Aluno &aluno) {
        cout << aluno << endl;
    });
}
