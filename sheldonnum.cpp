#include <iostream>
#include <math.h>
using namespace std;

int num;

int eh_primo(int n);
int posicao_primo(int n);
int invert_x(int x, int& reversex);
int invert_x_inverso(int x);
int produto_digitos(int n);
int convert_Decimal(int dec);


int main () {
cin >> num;
int pontosSheldon = 0;
    if(eh_primo(num) == true) {
        cout << "É primo" << endl;
        pontosSheldon += 1;
    }
    else{
        cout << "Não é primo" << endl;
    }
int position = posicao_primo(num);
    cout << "Posição: " << position << endl;
int guarda_position = position;
int numinverso = invert_x(num, numinverso);
    cout << "Número invertido: " << numinverso << endl;

    if(eh_primo(numinverso) == true) {
        cout << "Número invertido é primo" << endl;
        pontosSheldon += 1;
    }
    else {
        cout << "Número invertido não é primo" << endl;
    }

int position_inverso = posicao_primo(numinverso);
    cout << "Posição número invertido: " << position_inverso << endl;
position_inverso = invert_x_inverso(position_inverso);
    if(position == position_inverso) {
        cout << "Posições coincidem" << endl;
        pontosSheldon += 1;
    }
    else {
        cout << "As posições não coincidem" << endl;
    }

int produto = produto_digitos(num);
    cout << "Produto dos dígitos: " << produto << endl;
            if(position == produto) {
                cout << "Produto e posição coincidem" << endl;
                pontosSheldon += 1;
            }
            else {
                cout << "Produto e posição não coincidem" << endl;
            }
    int i = 0, transf;
        for(i = 0; i < num + 1; i++) {
            transf =  convert_Decimal(i);
    }
            cout << "Número em binário: " << transf << endl;

int binaryinverso = invert_x(transf, binaryinverso);
    if(transf == binaryinverso) {
        cout << "Binário é palíndromo" << endl;
        pontosSheldon += 1;
    }
    else {
        cout << "Binário não é palíndromo" << endl;
    }

     if(pontosSheldon == 5){
        cout << "É Sheldon";
    }
    else {
        cout << "Não é Sheldon";
    }
return 0;
}

int eh_primo(int n) { // Função para verificar se eh primo.

    int cont = 1, contD = 0;
    while(cont < n + 1) {
        if(n % cont == 0) {
            contD += 1;
        }
        cont += 1;
    }
    cont = 1;
        if(contD == 2) {
           return true;
        }
        else {
           return false;
        }
}

int posicao_primo(int n) { // Função para verificar a posição do número entre os primos.

    int nums = 1, contP = 0, position;
    while(nums < n + 1) {
        if(eh_primo(nums) == true) {
            contP += 1;
            }
        nums += 1;
    }
    return contP;
}

int invert_x(int x, int& reversex) { // Função para inverter o número.

int digitos = 0, guardax = x;

    while(x > 0) {
        x = x / 10;
        digitos++;
    }
    x = guardax;
    int cont, novox = 0, res;
        for(cont = digitos; cont > 0; cont--) {
            res = guardax % 10;
            novox = res * pow(10, digitos - 1) + novox;
            guardax = guardax / 10;
            digitos--;
        }
        reversex = novox;
        return reversex;
}

int invert_x_inverso(int x) {

    int digitos = 0, guardax = x;

    while(x > 0) {
        x = x / 10;
        digitos++;
    }
    x = guardax;
    int cont, novox = 0, res;
        for(cont = digitos; cont > 0; cont--) {
            res = guardax % 10;
            novox = res * pow(10, digitos - 1) + novox;
            guardax = guardax / 10;
            digitos--;
        }
        int reversex;
        reversex = novox;
        return reversex;
}

int produto_digitos(int n) { // Função para calcular o produto dos digitos.
int unidaden, guardan = n, produto;
    while(n > 10) {
        unidaden = n % 10;
        n /= 10;
    }
    produto = n * unidaden;
    n = guardan;
    return produto;
}

int convert_Decimal(int dec) { // Função para transformar em binário.

    int res, binary = 0, i = 1;

    do {
        res = dec % 2;
        dec /= 2;
        binary += res * i;
        i *= 10;
    } while( dec != 0);
    return binary;
}
