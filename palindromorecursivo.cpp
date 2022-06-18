#include <iostream>
#include <string.h>
#define TAM 100
using namespace std;

bool ispalin(char palavra[TAM], int x, int y);
bool eh_palin(char palavra[TAM]);

int main () {
	char palavra[TAM];

    cin.getline(palavra, TAM);
	if(eh_palin(palavra))
        cout << palavra << " é palíndromo";
	else
        cout << palavra << " não é palíndromo";

	return 0;
}

bool ispalin(char palavra[TAM], int x, int y) {
    if(x == y)
    return true;

    if(palavra[x] != palavra[y])
    return false;

    if(x < y + 1)
    return ispalin(palavra, x + 1, y - 1);

    return true;
}

bool eh_palin(char palavra[TAM]) {

    int tam = strlen(palavra);

    if(tam == 0)
        return true;

    return ispalin(palavra, 0, tam - 1);

}
