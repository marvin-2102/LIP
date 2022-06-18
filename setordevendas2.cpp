#include <iostream>
using namespace std;

int x1, x2;

int num1, num2;
int vendas1[30], vendas2[30];

bool foi_vendido(int& num, int& x, int vetor[]);
bool vendeu_dois(int& num, int& x, int vetor[]);
int who_lucro(int vetor1[], int vetor2[]);
bool produtos_caros1(int& num1, int& num2, int vetor1[], int vetor2[]);
bool produtos_caros2(int& num1, int& num2, int vetor1[], int vetor2[]);

int main () {

cin >> num1;

int cont;
cout << "Vendas 1." << endl;
cout << "[ ";
int soma1 = 0;
for(cont = 0; cont < num1; cont++) {
    cin >> vendas1[cont];
    cout << vendas1[cont];
    if(cont < num1 - 1)
        cout << " , ";
        soma1 = soma1 + vendas1[cont];
}
    cout << " ]" << endl;

cin >> num2;
cout << "Vendas 2." << endl << "[ ";
int soma2 = 0;
for(cont = 0; cont < num2; cont++) {
    cin >> vendas2[cont];
    cout << vendas2[cont];
    if(cont < num2 - 1)
        cout << " , ";
        soma2 = soma2 + vendas2[cont];
    }
    cout << " ]" << endl;

    cin >> x1 >> x2;
if(foi_vendido(num1, x1, vendas1)) {
    cout << "Sim, funcionário 1 vendeu um produto cujo valor foi " << x1 << endl;
  }
else {
    cout << "Não, funcionário 1 não vendeu um produto cujo valor foi " << x1 << endl;
  }

if(foi_vendido(num2, x2, vendas2)) {
    cout << "Sim, funcionário 2 vendeu um produto cujo valor foi " << x2 << endl;
  }
else {
    cout << "Não, funcionário 2 não vendeu um produto cujo valor foi " << x2 << endl;
  }


if(vendeu_dois(num1, x1, vendas1)) {
    cout << "Sim, funcionário 1 vendeu dois produtos com o mesmo valor " << endl;
  }
else {
    cout << "Não, funcionário 1 não vendeu dois produtos com o mesmo valor " << endl;
  }

if(vendeu_dois(num2, x2, vendas2)) {
    cout << "Sim, funcionário 2 vendeu dois produtos com o mesmo valor " << endl;
  }
else {
    cout << "Não, funcionário 2 não vendeu dois produtos com o mesmo valor " << endl;
  }

int quem_vendeu = who_lucro(vendas1, vendas2);

switch(quem_vendeu) {
case 0:
    cout << "O melhor vendedor foi 1" << endl;
    break;
case 1:
    cout << "Empate" << endl;
    break;
case 2:
    cout << "O melhor vendedor foi 2" << endl;
    break;
}

bool var_produtos_caros1 = produtos_caros1(num1, num2, vendas1, vendas2);

switch(var_produtos_caros1) {
case true:
    cout << "Sim, todos os produtos vendidos por 1 foram mais caros que os produtos vendidos por 2" << endl;
    break;
default:
    cout << "Não, os produtos vendidos por 1 não foram todos mais caros que os produtos vendidos por 2" << endl;
    break;
    }

bool var_produtos_caros2 = produtos_caros2(num1, num2, vendas1, vendas2);

switch(var_produtos_caros2) {
case true:
    cout << "Sim, todos os produtos vendidos por 2 foram mais caros que os produtos vendidos por 1";
    break;
default:
    cout << "Não, os produtos vendidos por 2 não foram todos mais caros que os produtos vendidos por 1";
    break;
    }

return 0;
}

// Espaço entre Funções

bool foi_vendido(int& num, int& x, int vetor[]) {
int contRep = 0, cont;
for(cont = 0; cont < num1; cont++) {
    if(vetor[cont] == x) {
      contRep += 1;
    }
  }
  if(contRep > 0) {
    return true;
  }
  else {
    return false;
  }
}

// Espaço entre Funções

bool vendeu_dois(int& num, int& x, int vetor[]) {

int vetor2[num], cont;
for(cont = 0; cont < num; cont++) {
   vetor2[cont] = vetor[cont];
}
int contRepe = 0, cont2;
for(cont = 0; cont < num; cont++) {
    cont2 = 0;
    while(cont2 < num) {
        if(vetor[cont] == vetor2[cont2] && cont != cont2) {
            contRepe += 1;
        }
    cont2 += 1;
    }
}
    if(contRepe > 0) {
        return true;
    }
    else {
       return false;
    }
}

// Espaço entre Funções

int who_lucro(int vetor1[], int vetor2[]) {

int cont, soma1 = 0;
for(cont = 0; cont < num1; cont++) {
    soma1 = soma1 + vetor1[cont];
    }
int soma2 = 0;
for(cont = 0; cont < num2; cont++) {
    soma2 = soma2 + vetor2[cont];
    }
if(soma1 > soma2) {
   return 0;
    }
else if (soma1 == soma2) {
    return 1;
    }
else {
    return 2;
    }
}

// Espaço entre Funções

bool produtos_caros1(int& num1, int& num2, int vetor1[], int vetor2[]) {
int cont, cont2, contMaior1 = 0;

for(cont = 0; cont < num1; cont++) {
cont2 = 0;
    while(cont2 < num2) {
        if(vetor1[cont] > vetor2[cont2]) {
            contMaior1 += 1;
            }
            cont2 += 1;
        }
    }
    if(contMaior1 == num1 * num2) {
        return true;
    }
    else {
        return false;
    }

}

// Espaço entre Funções

bool produtos_caros2(int& num1, int& num2, int vetor1[], int vetor2[]) {
int cont, cont2, contMaior2 = 0;

for(cont = 0; cont < num1; cont++) {
cont2 = 0;
    while(cont2 < num1) {
        if(vetor2[cont] > vetor1[cont2]) {
            contMaior2 += 1;
            }
            cont2 += 1;
        }
    }
    if(contMaior2 == num1 * num2) {
        return true;
    }
    else {
        return false;
    }
}
