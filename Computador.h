#pragma once

#include <string>

class Computador {
private:
    std::string cod;
    std::string nome;
    std::string marca;
    std::string processador;
    int memoria;
    int arm;
    int quant;
    double preco;

public:
    Computador();

    void setDados();
    void printDados();

    std::string retCodigo();
    std::string retNome();
    std::string retMarca();
    std::string retProcessador();
    int retMemoria();
    int retArmazenamento();
    double retPreco();
    int retQuantidade();
};