#include <iostream>
#define TAM 1000
using namespace std;

struct Loja {
    char nome[TAM];
    char endereco[TAM];
    string telefone;
    int clientes;
    char produtos[TAM];
};

struct Produto {
    char codigo[TAM];
    char nome[TAM];
    char preco[TAM];
    char estoque[TAM];
};

struct Data {
    char dia[TAM];
    char mes[TAM];
    char ano[TAM];
};

struct Cliente {
    char nome[TAM];
    char endereco[TAM];
    char email[TAM];
    char CPF[TAM];
};

int main () {

    int n, num_produtos;
    cin >> n >> num_produtos;
    Loja L;
    cin.ignore();
    cin.getline(L.nome, TAM);
    cin.getline(L.endereco, TAM);
    cin >> L.telefone;
    cout << "Loja: " << L.nome << endl << "Endereço: " << L.endereco << endl << "Telefone: " << L.telefone << endl;
    int i;
    Cliente c[n];
    Data data[n];
   for(i = 0; i < n; i++) {

        cin.getline(c[i].nome, TAM);
        cin.getline(c[i].endereco, TAM);
        cin.getline(c[i].email, TAM);
        cin.getline(c[i].CPF, TAM);
        cin.getline(data[i].dia, TAM);
        cin.getline(data[i].mes, TAM);
        cin.getline(data[i].ano, TAM);
        cin.ignore();

    }

    Produto p[TAM];
    for(i = 0; i < num_produtos; i++) {

        cin.getline(p[i].codigo, TAM);
        cin.getline(p[i].nome, TAM);
        cin.getline(p[i].preco, TAM);
        cin.getline(p[i].estoque, TAM);
        cin.ignore();

    }
    cout << p[0].codigo;
    int mes, posC, posP;
    cin >> mes >> posC >> posP;

	return 0;
}
