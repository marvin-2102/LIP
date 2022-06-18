#include <iostream>
#define TAM 30
using namespace std;

bool tem_linha(int L, int M[TAM][TAM]);
bool tem_coluna(int C, int M[TAM][TAM]);

int main () {

int n;
cin >> n;

int M[TAM][TAM], i, j;
int eh = 0;
for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        cin >> M[i][j];
        if(M[i][j] >= 0 && M[i][j] <= 1) {
            eh += 1;
            }
        else {
            eh -= 1;
            }
        }
    }
if(tem_linha(n, M) == true && tem_coluna(n, M) == true && eh == n * n) {
    cout << "É matriz de permutação";
    }
else {
    cout << "Não é matriz de permutação";
    }

return 0;
}

bool tem_linha(int L, int M[TAM][TAM]) {

int i, j, cont1 = 0, aux = 1;
for(i = 0; i < L; i++) {
    for(j = 0; j < L; j++) {
        if(M[i][j] == 1 && i != aux) {
            cont1 += 1;
            aux = i;
        }
    }
}
if(cont1 == L) {
    return true;
    }
else {
    return false;
    }

}

bool tem_coluna(int C, int M[TAM][TAM]) {

int i, j, cont1 = 0;
for(j = 0; j < C; j++) {
    for(i = 0; i < C; i++) {
        if(M[i][j] == 1) {
            cont1 += 1;
        }
    }
}
if(cont1 == C) {
    return true;
    }
else {
    return false;
    }
}
