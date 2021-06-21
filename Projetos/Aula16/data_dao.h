#pragma once

#include <fstream>
#include <vector>

using namespace std;

#include "data.h"

#define ARQUIVO_DATA_TXT "data.txt"

// Padrao de Projetos DAO/VO
//  - DAO: Data Access Object (objeto de acesso a dados)
//  - VO: Value Object (objeto de valor/entidade) 

// ORM

class DataDAO {
public:
    void insere(Data &data) const {
        ofstream arquivo(ARQUIVO_DATA_TXT, ios_base::out);
        arquivo << data;
        arquivo.close();
    }

    Data consulta() const {
        ifstream arquivo(ARQUIVO_DATA_TXT, ios_base::in);

        // Verifica se o arquivo abriu
        Data data;
        if (arquivo.is_open()) {
            arquivo >> data;
        }
        
        // ou verifica se o arquivo deu erro
        if (arquivo.fail()) {
            cerr << "Erro ao abrir o arquivo! " << ARQUIVO_DATA_TXT << endl;
            // TODO: Lancar uma excecao
        }

        arquivo.close();

        return data;
    }

    vector<Data> consulta_todos() const {
        ifstream arquivo(ARQUIVO_DATA_TXT, ios_base::in);

        vector<Data> datas;
        while (!arquivo.eof()) {
            Data data;
            arquivo >> data;

            datas.push_back(data);
        }

        arquivo.close();

        return datas;
    }

    // Inserir 1 registro
    // Inserir n registros
    // Consultar 1 registro
    // Consultar n registros
    // Deletar 1 registro
    // Alterar 1 registro
};
