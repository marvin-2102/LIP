#include <iostream>
#include <string.h>
#define TAM 100
using namespace std;


int main () {

    char frase[TAM];

    cin >> frase;



    if(frase == inverte(frase)) {
        cout << frase << "� um pal�ndromo";
    }
    else {
        cout << frase << "n�o � um pal�ndromo";
    }
    return 0;
}

