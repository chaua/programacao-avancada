#pragma once

#include <iostream>
#include <string>
using namespace std;

class Mamifero {
public:
    Mamifero() {
        cout << "Criando mamifero" << endl;
    }
    ~Mamifero(){
        cout << "Destruindo mamifero: " << endl;
    }
};

class Homem : public Mamifero {
public:
    Homem(string nome = "", int idade = 0) : Mamifero(), _nome(nome), _idade(idade) {
        cout << "Criando homem: " << _nome << endl;
    }

    ~Homem(){
        cout << "Destruindo homem: " << _nome << endl;
    }

    void andar() const {
        cout << _nome << " esta andando." << endl;
    }

protected:

    string getNome() const {
        return _nome;
    }

private:
    string _nome;
    int _idade;
    // ...
};



class SuperHomem : public Homem {
public:
    SuperHomem(string nome) : Homem(nome) {
        cout << "Criando superhomem: " << getNome() << endl;
    }

    ~SuperHomem() {
        cout << "Destruindo superhomem: " << getNome() << endl;
    }

};


class Aranha {
public:
    Aranha() {
        cout << "Criando aranha" << endl;
    }

    ~Aranha() {
        cout << "Destruindo aranha: " << endl;
    }

    void andar() {
        cout << "aranha esta andando." << endl;
    }
    
    void soltaTeia() {
        cout << "aranha esta soltando teias." << endl;
    }

};

class HomemAranha: public Homem, protected Aranha {
public:
    HomemAranha(string nome) : Homem(nome), Aranha() {
        cout << "Criando HomemAranha: " << getNome() << endl;
    }

    // Solucao 1: sobrescrever
    void andar() {
        cout << "Homem Aranha andando" << endl;
        Homem::andar(); 
        Aranha::andar();
    }


    void soltaTeia() {
        cout << "HomemAranha esta soltando teias pelas maos." << endl;
    }

};
