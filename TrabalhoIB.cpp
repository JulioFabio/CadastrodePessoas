#include <iostream>
#include <string>
using namespace std;

struct Cliente{
    string nome;
    string cpf;
    string endereço;
    string data_nascimento;
    string data_emprestimo; 
    double valor_emprestimo;
    double quantidade_parcela; //quantidade de parcelas//   
};

struct Parcela{
    float valor;
    bool paga;
    int data_vencimento;
    int data_pagamento;
};
   

int main(){

    Cliente clientecadastro[10];
    Parcela parcelacadastro[12];

    Cliente cadastroI;
    Parcela cadastroII;

    cout << "DADOS PESSOAIS DO CLIENTE" << endl;

    cout << "Insira o nome do cliente:" << endl;
    cin >> (cadastroI.nome);

    cout << "Insira o cpf do cliente:" << endl;
    cin >> (cadastroI.cpf);

    cout << "Insira o endereço do cliente:" << endl;
    cin.ignore(); 
    getline (cin, cadastroI.endereço);

    cout << "Insira a data de nascimento do cliente:" << endl;
    cin >> (cadastroI. data_nascimento);

    cout << "DADOS SOBRE O EMPRESTIMO" << endl;

    cout << "Insira a data do emprestimo" << endl;
    cin >> (cadastroI.data_emprestimo);

    cout << "Insira o valor do emprestimo" << endl;
    cin >> (cadastroI.valor_emprestimo);

    cout << "Insira a quantidade de parcelas do emprestimo" << endl;
    cin >> (cadastroI.quantidade_parcela);

   for(int i =0;i<cadastroI.quantidade_parcela;i++){
      cout<<"Dados da Parcela "<<i+1<<endl;

      cout<<"Insira o valor da parcela"<<endl;
      cin>>cadastroII.valor;

      cout<<"A parcela foi paga s/n?"<<endl;;
      char opcaoPagamento = 'n';
      cin>>opcaoPagamento;

      if(opcaoPagamento == 's'){
        cadastroII.paga = true;

        cout<<"Data de pagamento"<<endl;;
        cin>>cadastroII.data_pagamento;

      }else{
        cadastroII.paga = false;

        cout<<"Data de vencimento"<<endl;;
        cin>>cadastroII.data_vencimento;

        return;
        }


   }



   return(0);
}