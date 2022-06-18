#include <iostream>
#define TAM 100
using namespace std;

void pega_e_junta_vetores(int v1[TAM], int v2[TAM]) {

    int n, i;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for(i = 0; i < n; i++) {
        cin >> v2[i];
    }
    cout << "[ ";
    for(i = 0; i < n; i++) {
        cout << v1[i];
        if(i < n - 1)
            cout << " , ";
    }
    cout << " ]" << endl << "+" << endl << "[ ";
    for(i = 0; i < n; i ++) {
        cout << v2[i];
        if(i < n - 1)
            cout << " , ";
    }
    cout << " ]" << "=" << endl;

    int v3[TAM], aux1, aux2, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

        }
    }


}


int main () {
    int v1[TAM], v2[TAM];

    pega_e_junta_vetores(v1, v2);

    return 0;


}
