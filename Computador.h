#pragma once
using namespace std;
#include <string>

class Computador {
private:
    string cod;
    string nome;
    string marca;
    string processador;
    int memoria;
    int arm;
    int quant;
    double preco;

public:
    Computador();

    void setDados();
    void printDados();

    string retCodigo();
    string retNome();
    string retMarca();
    string retProcessador();
    int retMemoria();
    int retArmazenamento();
    double retPreco();
    int retQuantidade();
};