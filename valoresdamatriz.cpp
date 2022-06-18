#include <iostream>
#include <iomanip>
#define TAM 30
using namespace std;

int main () {

int n, m;

cin >> n >> m;

int M[TAM][TAM], i, j, maiorV, menorV;
for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
        cin >> M[i][j];
        if((i && j) == 0) {
            maiorV = M[i][j];
            menorV = M[i][j];
    }
        }
 }

int M2[TAM][TAM];
float somaV = 0;
for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
        M2[i][j] = M[i][j];
        somaV += M[i][j];
            if(M[i][j] > maiorV) {
                maiorV = M[i][j];
            }
            if(M[i][j] < menorV) {
                menorV = M[i][j];
            }
        }
    }
cout << "Menor valor: " << menorV << endl;
cout << "Maior valor: " << maiorV << endl;
cout << fixed << setprecision(2);
cout << "Média dos valores: " << somaV / (n * m);

return 0;
}
