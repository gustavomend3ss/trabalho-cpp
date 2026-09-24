#include "Computador.h"
#include <iostream>
#include <string>

using namespace std;

const int CAPACIDADE = 100;

Computador cadastrarComputador() {
    Computador computador;

    computador.setDados();

    return computador;
}

bool inserirComputador(Computador computadores[], int& quantidade, const Computador& computador) {
    if (quantidade >= CAPACIDADE) {
        return false;
    }

    computadores[quantidade] = computador;
    quantidade++;

    return true;
}

bool consultarComputador(Computador computadores[], int quantidade, const string& codigo) {
    for (int i = 0; i < quantidade; i++) {
        if (computadores[i].retCodigo() == codigo) {
            computadores[i].printDados();
            return true;
        }
    }
    return false;
}

int main() {
    Computador computadores[CAPACIDADE];
    int quantidade = 0;

    Computador computador = cadastrarComputador();

    if (inserirComputador(computadores, quantidade, computador)) {
        cout << "\nComputador inserido com sucesso.\n";
    } 

    string codigo;

    cout << "\nDigite o codigo do computador que deseja consultar: ";
    getline(cin >> ws, codigo);

    if (!consultarComputador(computadores, quantidade, codigo)) {
        cout << "\nComputador nao encontrado.\n";
    }

    return 0;
}