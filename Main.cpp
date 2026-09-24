#include "Computador.h"`
#include <iostream>

using namespace std;

const int CAPACIDADE = 100;

Computador cadastrarComputador() {
    Computador computador;

    computador.setDados();

    return computador;
}

bool inserirComputador(Computador computadores[], 
    int& quantidade, const Computador& computador) {
    if (quantidade >= CAPACIDADE) {
        return false;
    }

    computadores[quantidade] = computador;
    quantidade++;

    return true;
}

int main() {
    Computador computadores[CAPACIDADE];
    int quantidade = 0;

    Computador computador = cadastrarComputador();

    if (inserirComputador(computadores, quantidade, computador)) {
        cout << "\nComputador inserido com sucesso.\n";
    } else {
        cout << "\nNao foi possivel inserir o computador.\n";
    }

    computadores[0].printDados();

    return 0;
}