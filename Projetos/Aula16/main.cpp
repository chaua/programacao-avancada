#include <iostream>
#include <fstream>
#include <string>

#include "data.h"
#include "data_dao.h"

using namespace std;

// ARQUIVOS
//  - Caminho Absoluto:
//      - Realiza a busca do arquivo a partir da raiz do sistema operacional
//      - Utiliza o caminho inteiro do arquivo
//      - Precisa conhecer a estrutura de diretorios do disco
//      - Exemplo:
//          C:\projeto\teste\arquivo.txt
//          C:/projeto/teste/arquivo.txt
//          /home/user/arquivo.txt
//
//  - Caminho Relativo
//      - Busca o arquivo a partir do diretorio que se executa o programa
//      - Exemplo:
//          arquivo.txt
//          ./arquivo.txt   (. representa o diretorio corrente)
//          ../arquivo.txt  (.. representa o diretorio pai)
//          ../../teste.txt
//          pasta/arquivo.txt

int main() {

    // =========================
    // ESCREVER DADOS NO ARQUIVO
    // =========================

    // 1. Abre o arquivo para escrita
    //  - param1: nome do arquivo
    //  - param2: modo de abertura
    //      ios_base::out   - escrita destrutiva (padrao)
    //      ios_base::ate   - escrita concatenada
    //      ios_base::app   - escrita com append

    ofstream fout("teste.txt", ios_base::out);

    // 2. Escreve dados no arquivo
    fout << "Isso eh uma linha de texto!!!" << endl;
    fout << "Isso eh um numero: " << 99902 << endl;

    // 3. Fecha o arquivo
    fout.close(); // EOF

    // ====================
    // LER DADOS DO ARQUIVO
    // ====================

    // 1. Abre o arquivo para leitura
    //      ios_base::in

    ifstream fin("teste.txt", ios_base::in);

    // 2. Le os dados do arquivo
    string buffer;

    // leitura de token por token
    // fin >> palavra1 >> palavra2 >> numero >> palavra3;

    // leitura do arquivo linha a linha
    while (getline(fin, buffer)) {
        cout << buffer << endl;
    }
    
    // 3. Fecha o arquivo
    fin.close();

    // Teste da classe DAO
    Data data(7, 6, 2021);
    DataDAO dao;

    dao.insere(data);
    Data novaData = dao.consulta();
    cout << "nova data: " << novaData << endl;

    return 0;
}