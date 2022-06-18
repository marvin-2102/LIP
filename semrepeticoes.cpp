#include <iostream>
#define TAM 30
using namespace std;

int main () {

int num;
cin >> num;

int cont, vetor[TAM], vetor2[TAM];

for(cont = 0; cont < num; cont++) {
    cin >> vetor[cont];
    vetor2[cont] = vetor[cont];
    }
int cont2, contRep;
cout << "[ ";
for(cont = 0; cont < num; cont++) {
    for(cont2 = 0; cont2 < num; cont2++) {
        if(vetor[cont] == vetor2[cont2]) {
            vetor3[cont] = vetor[cont];
            }
        if(vetor[cont] != vetor2[cont]) {
            vetor3[cont] = ve
            }
        }
    }
cout << " ]";


return 0;
}
