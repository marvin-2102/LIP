#include <iostream>
using namespace std;

int retorna_dez(int a, int& b, int& c);
int eh_igual(int y, int z);

int main () {

int n, m;

cin >> n >> m;

int cont, igual, b , c;

for(cont = n; cont < m; cont++) {
     igual = retorna_dez(cont, b, c);
        if(igual == true)
            cout << igual << endl;
    }

}

int retorna_dez(int a, int& b, int& c) {

int d1 = 0, d2 = 0, i = 1;
    while(a > 0) {
        if(a >= 100) {
        d2 = d2 + i * a % 10;
        a = a / 10;
        }
        else if(a < 100) {
        i = 1;
        d1 = d1 + i * a % 10;
        a = a / 10;
        }
        i *= 10;
    }
        b = eh_igual(d2, d1);
        c = eh_igual(d2, d1);
}

int eh_igual(int y, int z) {

int deiz = 10, revd2 = 0;
    while(z > 0) {
        revd2 = revd2 + deiz * z % 10;
        z = z / 10;
        deiz /= 10;
    }
    z = revd2;
    if(z == y) {
        return true;
    }
        else {
            return false;
        }
}
