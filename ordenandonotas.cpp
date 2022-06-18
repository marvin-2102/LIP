#include <iostream>
#include <iomanip>
#define TAM 100
using namespace std;

void maiores_notas() {
    int k, n, i;
    cin >> k >> n;
    double notas[TAM];
    for(i = 0; i < n; i++) {
        cin >> notas[i];
    }
    cout << "[ ";
    for(i = 0; i < n; i++) {
        cout << notas[i];
        if(i < n - 1)
            cout << " , ";
    }
    cout << " ]" << endl;
    int j;
    double aux;
    for(i = 0; i < n; i++) {
        for(j = 0 ; j < n; j++) {
            if(notas[i] > notas[j]) {
                aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
        }

    }
    double soma = 0;
    for(i = 0; i < k; i++) {
        soma += notas[i];
    }

    cout << fixed << setprecision(2);
    cout << "Média = " << soma / k;

}


int main () {

     maiores_notas();

     return 0;

}
