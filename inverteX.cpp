#include <iostream>
#include <math.h>
using namespace std;

// Uma fun��o para inverter a ordem dos algarismos recebendo um par�metro X por refer�ncia.

int invert_x(int x, int& reversex);

int main () {

int X;

cin >> X;

int reveX;

int result = invert_x(X, reveX);

    if(result == -1) {
        cout << "X = " << X << endl;
        cout << "X invertido = " << reveX << endl;
        cout << "X � maior que X invertido";
    }
        else if(result == 0) {
            cout << "X = " << X << endl;
            cout << "X invertido = " << reveX << endl;
            cout << "X � igual que X invertido";
        }
            else {
                cout << "X = " << X << endl;
                cout << "X invertido = " << reveX << endl;
                cout << "X � menor que X invertido";

            }

return 0;
}

int invert_x(int x, int& reversex) {

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

            if(x == reversex) {
                return 0;
    }
                else if(x > reversex) {
                    return 1;
    }
            else {
                return -1;

        }
    }



