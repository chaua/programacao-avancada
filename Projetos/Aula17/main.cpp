#include <iostream>
#include <exception>

using namespace std;

// Excecoes
//  - Eh um comportamento que foge do esperado
//  - Vantagem: 
//      - separa tratamento do erro da logica de programacao 
//      - permite propagacao de erro para a camada que deve realizar o tratamento

// Etapas para trabalhar com excecoes
//  1. Realizar o lancamento da excecao
//      - throw: comando para o lancamento de excecao
//
//      Tipos permitidos de excecao:
//          - int
//          - char
//          - const char * (string estatica)
//          - enum
//          - objeto (std::exception)
//
//  2. Capturar a excecao
//      - try {}
//      - catch(...) {}
//
//      NÃO PODE SER USADO PARA CONTROLE DE FLUXO!!!
//
// Se ninguem capturar a excecao, o programa termina

class DivisaoPorZeroException: public exception {
public:
    virtual const char *what() const throw() {
        return "Impossivel dividir por zero!";
    }
};

class ValorNegativoException : public exception {
public:
    virtual const char *what() const throw() {
        return "Erro ao informar valor negativo!";
    }
};

int divide(int a, int b) {
    if (b == 0) {
        // throw -100;
        // throw 'X';
        throw DivisaoPorZeroException();
    }

    if (a < 0 || b < 0) {
        // throw "Nao eh possivel dividir numeros negativos";
        throw ValorNegativoException();
    }

    return a / b;
}


int main() {
    
    try {
        int a = 10;
        int b = 0;

        int resultado = divide(a, b);
        cout << "a / b = " << resultado << endl;
    }
    catch (int erro) {
        if (erro == -100) {
            cerr << "Impossivel dividir por zero!" << endl; 
        }
    }
    catch (const char *erro) {
        cerr << erro << endl;
    } 
    catch (DivisaoPorZeroException &ex) {
        cerr << ex.what() << endl;
    }
    catch (ValorNegativoException &ex) {
        cerr << ex.what() << endl;
    }
    catch (exception &ex) {
        cerr << ex.what() << endl;
    }

    // Atividade
    // - Escreva um programa que solicite para o usuario digitar um número inteiro
    // - Crie uma função chamada avaliaNumero(int n) que lanca as seguintes excecoes:
    //   - n < 0: NumeroNegativoException()
    //   - n > 0: NumeroPositivoException()
    //   - n = 0: NumeroNuloException()



    cout << "FIM!" << endl;

    return 0;
}
