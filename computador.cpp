#include "Computador.h"

#include <iostream>
using namespace std;

Computador::Computador() {
    memoria = 0;
    arm = 0;
    quant = 0;
    preco = 0;
}

void Computador::setDados() {
    cout << "\nCodigo: ";
    getline(cin >> ws, cod);

    cout << "\nNome: ";
    getline(cin >> ws, nome);

    cout << "\nMarca: ";
    getline(cin >> ws, marca);

    cout << "\nProcessador: ";
    getline(cin >> ws, processador);

    cout << "\nMemória RAM: ";
    cin >> memoria;

    cout << "\nArmazenamento: ";
    cin >> arm;

    cout << "\nValor: ";
    cin >> preco;

    cout << "\nQuantidade em estoque: ";
    cin >> quant; 
}

void Computador::printDados() {
    cout << "\nCódigo: " << cod;
    cout << "\nNome: " << nome;
    cout << "\nMarca: " << marca;
    cout << "\nProcessador: " << processador;
    cout << "\nMemória RAM: " << memoria << " GB";
    cout << "\nArmazenamento: " << arm << " GB";
    cout << "\nValor: R$" << preco;
    cout << "\nQuantidade em estoque: " << quant;
}

string Computador::retCodigo() {
    return cod;
}

string Computador::retNome(){
    return nome;
}

string Computador::retMarca(){
    return marca;
}

string Computador::retProcessador(){
    return processador;
}

int Computador::retMemoria(){
    return memoria;
}

int Computador::retArmazenamento(){
    return arm;
}

double Computador::retPreco(){
    return preco;
}

int Computador::retQuantidade(){
    return quant;
}

/*class Computador {
    private: 
        string cod, nome, marca, processador;
        int memoria, arm, quant;
        double preco;

    public:
        Computador(){
            memoria = 0;
            arm = 0;
            quant = 0;
            preco = 0;
        }

        ~Computador(){
        }

        void set_dados(){
            cout << "\nCódigo: ";
            getline(cin>>ws, cod);
            cout << "\nNome: ";
            getline(cin>>ws, nome);
            cout << "\nMarca: ";
            getline(cin>>ws, marca);
            cout << "\nProcessador: ";
            getline(cin>>ws, processador);
            cout << "\nMemória RAM: ";
            cin >> memoria;
            cout << "\nArmazenamento: ";
            cin >> arm;
            cout << "\nValor: ";
            cin >> preco;
            cout << "\nQuantidade em estoque: ";
            cin >> quant; 
        }
        void print_dados(){
            cout << "\nCódigo: " << cod;
            cout << "\nNome: " << nome;
            cout << "\nMarca: " << marca;
            cout << "\nProcessador: " << processador;
            cout << "\nMemória RAM: " << memoria << " GB";
            cout << "\nArmazenamento: " << arm << " GB";
            cout << "\nValor: R$" << preco;
            cout << "\nQuantidade em estoque: " << quant;
        }
        string ret_codigo(){
            return cod;
        }
        string ret_nome(){
            return nome;
        }
        string ret_marca(){
            return marca;
        }
        string ret_processador(){
            return processador;
        }
        int ret_memoria(){
            return memoria;
        }
        int ret_armazenamento(){
            return arm;
        }
        double ret_preco(){
            return preco;
        }
        int ret_quantidade(){
            return quant;
        }
};*/