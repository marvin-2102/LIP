#include <iostream>
using namespace std;

void forma_matriz(int D, int n);

int main () {

    int s, D, n;

    cin >> s >> D >> n;
    srand(s);
    forma_matriz(D, n);

    return 0;
}

void forma_matriz(int D, int n) {
    int i, j, M[D][D];
    for(i = 0; i < D; i++) {
        for(j = 0; j < D; j++) {
            if(i == j) {
                M[i][j] = 1;
            }
            else {
                M[i][j] = 0;
            }
        }
    }
    int n1, n2, aux1[D], aux2[D], perme;
       for(int e = 0; e < n; e++) {
            n1 = rand() % D;
            n2 = rand() % D;
            perme = rand() % 2;
            if(perme == 0) {
                cout << "linha: " << n1 << " <-> " << n2 << endl;
                for(i = 0; i < D; i++) {
                    aux1[i] = M[n1][i];
                    M[n1][i] = M[n2][i];
                    M[n2][i] = aux1[i];
                }
            }
            else {
                cout << "col: " << n1 << " <-> " << n2 << endl;
                for(j = 0; j < D; j++) {
                    aux2[j] = M[j][n1];
                    M[j][n1] = M[j][n2];
                    M[j][n2] = aux2[j];
                }
            }
        }
    for(i = 0; i < D; i++) {
        for(j = 0; j < D; j++) {
            cout << M[i][j] << " ";
        }

        cout << endl;
    }
}

