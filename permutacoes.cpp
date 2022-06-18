#include <iostream>
using namespace std;

void num_aleatorio(int n, int tam, int vetor[]);
int s;
int main () {

    int tam;

    cin >> s >> tam;

    int vetor[tam], i;
    for(i = 0; i < tam; i++) {
        cin >> vetor[i];
    }
    cout << "vetor original" << endl << "[ ";
    for(i = 0; i < tam; i++) {
        cout << vetor[i];
        if(i < tam - 1)
          cout << " , ";
    }
    cout << " ]" << endl << "permutações" << endl;
  int num;
  num_aleatorio(num, tam, vetor);

    return 0;
}

void num_aleatorio(int n, int tam, int vetor[]) {
    srand(s);
    n = 1 + (rand() % 5);
    int i, j, n1, n2, aux1, aux2;
    cout << "n = " << n << endl;
    for(i = 0; i < n; i++) {
        n1 = rand() % tam;
        n2 = rand() % tam;
        cout << "pos " << n1 << " <-> " << n2 << endl;
        aux1 = vetor[n1];
        aux2 = vetor[n2];
        for(j = 0; j < tam; j++) {
            if(j == n1) {
                vetor[n1] = aux2;
                vetor[n2] = aux1;
            }
        }
    }
    cout << "resultado" << endl << "[ ";
    for(i = 0; i < tam; i++) {
        cout << vetor[i];
        if(i < tam - 1)
            cout << " , ";
    }
    cout << " ]";
}
