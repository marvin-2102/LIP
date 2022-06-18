#include <iostream>
#define TAM 100
using namespace std;


bool linhas_iguais(int L, int C, int M[TAM][TAM]);

int main () {
int l, c;

cin >> l >> c;

int M[TAM][TAM], i, j;

for(i = 0; i < l; i++) {
    for(j = 0; j < c; j++) {
        cin >> M[i][j];
        }
    }
if(linhas_iguais(l, c, M)) {
    cout << "A matriz tem linhas repetidas";
    }
else {
    cout << "A matriz nao tem linhas repetidas";
    }

return 0;
}

bool linhas_iguais(int L, int C, int M[TAM][TAM]) {

int i, j, k;
int cont;
for(i = 0; i < L - 1; i++) {
    for(k = 0; k < L; k++) {
         for(j = 0; j < C; j++) {
            if(i==k) {
                k += 1;
                }
            if(M[i][j] == M[k][j]) {
                cont += 1;
                }
            }
        if(cont == C) {
            return true;
        }
            cont = 0;

        }
    }
    return false;
}
