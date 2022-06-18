#include <iostream>
#define TAM 50
    using namespace std;

    float calc_media(int C, int L[]);

    int main () {
    int L, C;
    cin >> L >> C;

    int i, j, M[TAM][TAM];
    for(i = 0; i < L; i++) {
        for(j = 0; j < C; j++) {
            cin >> M[i][j];
            }
        }
    int k, Linha[TAM] = {}, cont = 0;
    for(i = 0; i < L; i++) {
        for(j = 0, k = 0; j < C; j++, k++) {
            Linha[k] = M[i][j];
            }

     cout << "[ ";
     int x;
     for(x = 0; x < C; x++) {
        if(Linha[x] >= calc_media(C, Linha)) {
            if(cont != 0) {
                cout << " , ";
            }
            cout << Linha[x];
            cont += 1;
        }
     }
     cout << " ]" << endl;
     cont = 0;
     Linha[TAM] = {};
    }

    return 0;
    }

    float calc_media(int C, int L[]) {

    int i;
    float soma = 0, media;
    for(i = 0; i < C; i++) {
        soma += L[i];
    }
    media = soma / C;
    return media;
    }
