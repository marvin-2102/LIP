#include <iostream>
using namespace std;


int num;

int SD(int n) {

int cont, sum = 0;

for(cont = 1; cont < n; cont++) {

if(n % cont == 0) {
sum = sum + cont;
  }
 }

return sum;

}

// Espaço entre funções

bool numamigos(int n1, int n2) {

bool amigos;

for(n2 = 2; n2 < num; n2++) {
if(SD(n1) == n2 && SD(n2) == n1) {
    amigos = true;
 }
else {
  amigos = false;
  }
}
return amigos;

}

// Espaço entre funções

int main() {

cin >> num;

int cont, cont2;

for(cont = 2; cont < num; cont++) {
    if(numamigos(cont, cont2) == true) {
        cout << cont << " amigo de " << cont2 << endl;
    }
}


return 0;
}
