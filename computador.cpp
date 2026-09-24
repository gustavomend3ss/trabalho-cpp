#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Computadores{
    private: 
        string cod, nome, marca, processador;
        int memoria, arm, quant;
        double preco;

    public:
        Computadores(){
            memoria = 0;
            arm = 0;
            quant = 0;
            preco = 0;
        }
        ~Computadores(){
        }
        void set_dados(){
            cout << "\nCódigo: ";
            getline(cin>>ws, cod);
            cout << "\nModelo: ";
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
            cout << "\nModelo: " << nome;
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
};

int main(){

    Computadores temp;
    vector<Computadores> Computador;
    int op, tamanho, p, tipo, rep, enc;
    string busca, resp;

    do{
        cout << "\n==================== LOJA DE COMPUTADORES ======================";
        cout << "\n1. Cadastros";
        cout << "\n2. Alterar dados";
        cout << "\n3. Consulta";
        cout << "\n4. Relatorio (imprimir)";
        cout << "\n5. Inserir em uma posição";
        cout << "\n6. Remover computador";
        cout << "\n0. Sair";
        cout << "\nDigite uma opção: ";
        cin >> op;

        if(op==1){
            do{
                temp.set_dados();
                Computador.push_back(temp);
                cout << "\nDeseja cadastrar outro computador (sim/nao)? ";
                getline(cin>>ws,resp);
            }while(resp=="sim");
        }
        else if(op==2){
            cout << "\nDigite o código do computador que deseja alterar: ";
            getline(cin>>ws, busca);
            enc = 0;
            for(int a = 0; a < Computador.size(); a++){
                if(busca==Computador.at(a).ret_codigo()){
                    cout << "\nDados atuais:";
                    Computador.at(a).print_dados();
                    cout << "\n\nDigite os novos dados:";
                    Computador.at(a).set_dados();
                    enc = 1;                   
                }
            }
            if(enc == 1)
                cout << "\nDados alterados com sucesso!\n";
            else
                cout << "\nNão encontrado!\n";
        }
        else if(op==3){
            cout << "\n1. Consultar por nome";
            cout << "\n2. Consultar por código";
            cout << "\nOpção: ";
            cin >> tipo;
            if(tipo==1 or tipo==2){
                cout << "\nDigite o que deseja buscar: ";
                getline(cin>>ws, busca);
                enc = 0;
                for(int a = 0; a < Computador.size(); a++){
                    if((tipo==1 and busca==Computador.at(a).ret_nome()) or (tipo==2 and busca==Computador.at(a).ret_codigo())){
                        Computador.at(a).print_dados();
                        cout << "\n";
                        enc++;
                    }
                }
                if(enc==0)
                    cout << "\nNenhum computador encontrado.\n";
                else
                    cout << "\n" << enc << " computador(es) encontrado(s).\n";
            }
            else
                cout << "\nOpção inválida!\n";
        }
        else if(op==4){
            if(Computador.empty())
                cout << "\nNenhum computador cadastrado.\n";
            else{
                cout << "\n------------------------ RELATÓRIO ------------------------\n";
                for(int a = 0; a < Computador.size(); a++){
                    cout << "\nPos.: " << a + 1;
                    Computador.at(a).print_dados();
                    cout << "\n";
                }
                cout << "\nTotal de computadores cadastrados: " << Computador.size() << "\n";
            }
        }
        else if(op==5){
            tamanho = Computador.size();
            for(int a = 0; a < tamanho; a++)
                cout << "\nPos.: " << a + 1 << "\t" << Computador.at(a).ret_nome();
                cout << "\n\nDigite a posição a ser incluído (1 a " << tamanho << "): ";
                cin >> p;
            if(p>=0 and p<=tamanho){
                temp.set_dados();
                Computador.insert(Computador.begin()+(p-1), temp);
                cout << "\nComputador inserido na posição " << p  << "!\n";
            }
            else
                cout << "\nPosição inválida!\n";
        }
        else if(op==6){
            cout << "\nDigite o código do computador a ser removido: ";
            getline(cin>>ws,busca);
            enc = 0;
            for(int a = 0; a < Computador.size(); a++){
                if(busca==Computador.at(a).ret_codigo()){
                    Computador.erase(Computador.begin()+a);
                    enc = 1;
                }
            }
            if(enc==1)
                cout << "\nComputador removido.";
            else
                cout << "\nNão encontrado";
        }
        else if(op!=0)
            cout << "\nOpção inválida!\n";
    }while(op!=0);

    cout <<"\n\n";

    return 0;

}