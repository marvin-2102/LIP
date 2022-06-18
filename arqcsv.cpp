#include <iostream>
#include <fstream>
#define TAM 100
using namespace std;

struct Dados {
    char CPF[TAM];
    char nome[TAM];
    char sobrenome[TAM];
    char endereco[TAM];
    char telefone[TAM];
};

int main () {

    ofstream arquivo;
    int n;
    cin >> n;

    int i;
    arquivo.open("Dados.csv");
    Dados d[TAM];
    cin.ignore();
    for(i = 0; i < n; i++) {
        cin.getline(d[i].CPF, TAM);
        cin.getline(d[i].nome, TAM);
        cin.getline(d[i].sobrenome, TAM);
        cin.getline(d[i].endereco, TAM);
        cin.getline(d[i].telefone, TAM);
        arquivo << d[i].CPF << ";" <<  d[i].nome << ";" << d[i].sobrenome << ";" << d[i].endereco << ";" << d[i].telefone << endl;
    }
    arquivo.close();

    ifstream arquivoE;
    string linha;
    arquivoE.open("Dados.csv");
    while(getline(arquivoE, linha)) {
        cout << linha << endl;
    }

    arquivoE.close();
	return 0;
}
