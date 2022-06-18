#include <iostream>
using namespace std;

int main () {

int num;

cin >> num;

int vetor[num], cont;

for(cont = 0; cont < num; cont++) {
    cin >> vetor[cont];
    }
int vetor2[num], cont2;
for(cont2 = 0; cont2 < num; cont2++) {
   vetor2[cont2] = vetor[cont2];
}
int contRepe = 0;
for(cont = 0; cont < num; cont++) {
    cont2 = 0;
    while(cont2 < num) {
        if(vetor[cont] == vetor2[cont2] && cont != cont2) {
            contRepe += 1;
        }
    cont2 += 1;
    }
}
    if(contRepe > 0) {
        cout << "Existem elementos repetidos";
    }
    else {
        cout << "Não existem elementos repetidos";
    }

    return 0;
}
