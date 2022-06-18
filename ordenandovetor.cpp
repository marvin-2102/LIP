#include <iostream>
#define TAM 100
using namespace std;

void recebe_vetor_e_ordena_V(int V[TAM]) {
    int n, i;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> V[i];
    }
    cout << "[ ";
    for(i = 0; i < n; i++) {
        cout << V[i];
        if(i < n - 1)
            cout << " , ";
    }
    cout << " ]" << endl;


    int vetor_aux[TAM];
    for(i = 0; i < n; i++) {
        vetor_aux[i] = V[i];
    }
    int aux;
        for(i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(V[i] > V[j]) {
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
                }
            }
        }

        cout << "[ ";
        for(i = 0; i < n; i++) {
            cout << V[i];
            if(i < n - 1)
                cout << " , ";
        }
        cout << " ]";
}

int main () {

    int V[TAM];
    recebe_vetor_e_ordena_V(V);

    return 0;

}
