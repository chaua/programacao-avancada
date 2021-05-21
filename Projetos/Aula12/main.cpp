#include <iostream>
#include <string>
using namespace std;

class Aluno {
public:
    Aluno(int matricula) : _matricula(matricula) {}

    bool operator>(const Aluno &outro) {
        return _matricula > outro._matricula;
    }

    friend ostream& operator<<(ostream &out, const Aluno &aluno) {
        out << aluno._matricula;
        return out;
    }

private:
    int _matricula;
};

// Modo sem templates

// int max(int a, int b) {
//     return a > b ? a : b;
// }

// float max(float a, float b) {
//     return a > b ? a : b;
// }

// double max(double a, double b) {
//     return a > b ? a : b;
// }

// char max(char a, char b) {
//     return a > b ? a : b;
// }

// Templates (Tipos genéricos)
// - realizar a parametrizacao dos tipos de dados
// - convencao utilizar uma letra maiuscula
// - bastante utilizado para estruturas de dados (STL)


template <typename T>
inline T maior(T a, T b) {
    return a > b ? a : b;
}

template <typename T, typename X>
inline void menor(T a, X b)  {
    //return a > b ? a : b;
}

template <class T>
class Caixa {
public:
    Caixa(T item) : _item(item) {}

private:
    T _item;
};

class CaixaInt{};
class CaixaDouble{};
class CaixaString{};

template <class T = string, int MAX = 1000>
class ListaEstatica {
public:
    //...
private:
    T _itens[MAX];
};

int main()
    {
        int x = 100;
        int y = 200;
        cout << maior(x, y) << endl;

        float r = 0.1f;
        float s = 0.09999f;
        cout << maior(r, s) << endl;

        double t = 0.1e-10;
        double u = 0.09999e-20;
        cout << maior(t, u) << endl;

        char c = 'X';
        char d = 'A';
        cout << maior(c, d) << endl;

        string s1 = "Abacaxi";
        string s2 = "Banana";
        cout << maior(s1, s2) << endl;

        Aluno a1(1000);
        Aluno a2(1003);
        cout << maior(a1, a2) << endl;

        menor(100, a2);

        Caixa<int> caixa1(100);
        Caixa<double> caixa2(0.3e100);
        Caixa<string> caixa3("Laranja");
        Caixa<Aluno> caixa4(a1);

        ListaEstatica<int, 100> l1;
        ListaEstatica<char, 25> l2;
        ListaEstatica<int> l3; // T=int, MAX=1000
        ListaEstatica<> l4; // T=string, MAX=1000

        // Pilha<string>
        // p += 10
        // p--
        //

        return 0;
    }
