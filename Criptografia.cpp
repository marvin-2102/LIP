#include <iostream>
#include <ctype.h>
#define TAM 100
using namespace std;

void criptograph(int n, int fraseTam, char s1[TAM], char s1_cript[TAM]);

int main () {

    int n;

    cin >> n;

    char s1[TAM], s2[TAM];

    cin.get();
    cin.getline(s1, TAM);
    cin.getline(s2, TAM);

    int i, fraseTam = 0,
    while(s1[i] != '\0') {
        fraseTam += 1;
        i += 1;
    }


return 0;
}


void criptograph(int n, int fraseTam, char s1[TAM], char s1_cript[TAM]) {
    int i;
    for(i = 0; i < fraseTam; i++) {
        if(i % 2 == 0) {

        }
    }

}
