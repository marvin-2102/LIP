#include <iostream>
#include <string.h>
#define TAM 100
using namespace std;

void guarda_vogal_conso();
void torna_int(char V[TAM], int Vint[TAM]);
void ordena(int V[TAM], int tam);

int main () {

    guarda_vogal_conso();

    return 0;

}

void guarda_vogal_conso() {

    char s[TAM];

    cin.getline(s, TAM);
    cout << s << endl;
    int i, j, k, tamanho;
    tamanho = strlen(s);
    char vogais[TAM], conso[TAM];
    for(i = 0, j = 0, k = 0; i < tamanho; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            vogais[j] = s[i];
            j += 1;
        }
        else {
           conso[k] = s[i];
           k += 1;
        }
    }
    int vogals[TAM];
    torna_int(vogais, vogals);
    int consoantes[TAM];
    torna_int(conso, consoantes);

    int tamV, tamC;
    tamV = strlen(vogais);
    tamC = strlen(conso);

    ordena(vogals, tamV);
    ordena(consoantes, tamC);

    char s_ordenado[TAM];
    for(i = 0; i < tamV; i++) {
        s_ordenado[i] = char(vogals[i]);
    }

    for(i = tamV, j = 0; j < tamC; i++, j++) {
        s_ordenado[i] = char(consoantes[j]);
    }

    cout << s_ordenado;
}

void torna_int(char V[TAM], int Vint[TAM]) {
    int tam = strlen(V);
    int i;
    for(i = 0; i < tam; i++) {
        Vint[i] = int(V[i]);
    }
}

void ordena(int V[TAM], int tam) {
    int i, j, aux;
    for(i = 0; i < tam; i++) {
        for(j = i + 1 ; j < tam; j++) {
            if(V[i] > V[j]) {
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
}
}
