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

bool removerComputador(Computador computadores[], int& quantidade, const string& codigo) {
    int posicao = -1;

    for (int i = 0; i < quantidade; i++) {
        if (computadores[i].retCodigo() == codigo) {
            posicao = i;
            break;
        }
    }

    if (posicao == -1) {
        return false;
    }

    for (int i = posicao; i < quantidade - 1; i++) {
        computadores[i] = computadores[i + 1];
    }

    quantidade--;

    return true;
}

int main() {
    Computador computadores[CAPACIDADE];
    int quantidade = 0;

    for (int i = 0; i < 3; i++) {
        cout << "\n========== CADASTRO " << i + 1 << " ==========\n";

        Computador computador = cadastrarComputador();

        if (inserirComputador(computadores, quantidade, computador)) {
            cout << "\nComputador inserido com sucesso.\n";
        }
    }

    string codigo;

    cout << "\nDigite o codigo do computador que deseja remover: ";
    getline(cin >> ws, codigo);

    if (removerComputador(computadores, quantidade, codigo)) {
        cout << "\nComputador removido com sucesso.\n";
    } else {
        cout << "\nComputador nao encontrado.\n";
    }

    cout << "\nQuantidade de computadores: " << quantidade << "\n";

    cout << "\nDigite o codigo do computador que deseja consultar: ";
    getline(cin >> ws, codigo);

    if (!consultarComputador(computadores, quantidade, codigo)) {
        cout << "\nComputador nao encontrado.\n";
    }

    return 0;
}