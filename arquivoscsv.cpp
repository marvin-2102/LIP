#include <iostream>
#include <fstream>
#define TAM 100
using namespace std;

struct Dados {
    string CPF;
    char nome[TAM];
    char sobrenome[TAM];
    char endereco[TAM];
    char telefone[TAM];
};

int main () {

    ifstream fin("arqui.txt");
    int n;
    cin >> n;

    int i;
    Dados d[TAM];
    cin.ignore();
    for(i = 0; i < n; i++) {
        cin >> d[i].CPF;
        cin.getline(d[i].nome, TAM);
        cin.getline(d[i].sobrenome, TAM);
        cin.getline(d[i].endereco, TAM);
        cin.getline(d[i].telefone, TAM);
    }

    cout << d[i].telefone;
	return 0;
}
