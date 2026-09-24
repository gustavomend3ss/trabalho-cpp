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

void listarComputadores(Computador computadores[], int quantidade) {
    if (quantidade == 0) {
        cout << "\nNenhum computador cadastrado.\n";
        return;
    }

    for (int i = 0; i < quantidade; i++) {
        cout << "\n========== COMPUTADOR " << i + 1 << "==========\n";
        computadores[i].printDados();
        cout << "\n";
    }
}

int main() {
    Computador computadores[CAPACIDADE];
    int quantidade = 0;
    int opcao;

    do {
        cout << "\n=================================";
        cout << "\n\tSISTEMA DE COMPUTADORES";
        cout << "\n=================================";
        cout << "\n1 - Cadastrar computador";
        cout << "\n2 - Consultar computador";
        cout << "\n3 - Listar computadores";
        cout << "\n4 - Remover computador";
        cout << "\n0 - Sair";
        cout << "\n\nEscolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                Computador computador = cadastrarComputador();

                if (inserirComputador(computadores, quantidade, computador)) {
                    cout << "\nComputador cadastrado com sucesso.\n";
                } else {
                    cout << "\nNao foi possivel cadastrar o computador.\n";
                }
                break;
            }

            case 2: {
                string codigo;

                cout << "\nDigite o codigo do computador: ";
                getline(cin >> ws, codigo);

                if (!consultarComputador(computadores, quantidade, codigo)) {
                    cout << "\nComputador nao encontrado.\n";
                }
                break;
            }
            
            case 3: {
                listarComputadores(computadores, quantidade);
                break;
            }

            case 4: {
                string codigo;

                cout << "\nDigite o codigo do computador que deseja remover: ";
                getline(cin >> ws, codigo);

                if (removerComputador(computadores, quantidade, codigo)) {
                    cout << "\nComptuador removido com sucesso.\n";
                } else {
                    cout << "\nComputador nao encontrado.\n";
                }
                break;
            }

            case 0:
                cout << "\nEncerrando o programa...\n";
                break;

            default:
                cout << "\nOpcao invalida.\n";
        }
    } while (opcao != 0);

    return 0;
}