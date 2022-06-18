#include <iostream>
#include <string.h>
#define TAM 100
using namespace std;


int main () {

    char frase[TAM];

    cin >> frase;



    if(frase == inverte(frase)) {
        cout << frase << "é um palíndromo";
    }
    else {
        cout << frase << "não é um palíndromo";
    }
    return 0;
}

