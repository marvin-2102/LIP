#include <iostream>
using namespace std;

int x1, x2;
bool se_vendeu(int num, int vetor[]);
//int msm_valor();
//int mais_caros()

int main () {

int num1, vendas1[30];

cin >> num1;

int cont;

cout << "Vendas 1." << endl << "[ ";

int soma1 = 0;
for(cont = 0; cont < num1; cont++) {
    cin >> vendas1[cont];
    soma1 = soma1 + vendas1[cont];
    if(cont < num1 - 1)
        cout << vendas1[cont];
        cout << ", ";
    }
    cout << " ]";

int num2;
cin >> num2;
cout << "Vendas 2." << endl << "[";
int vendas2[30], soma2 = 0;
for(cont = 0; cont < num2; cont++) {
    cin >> vendas2[cont];
    soma2 = soma2 + vendas2[cont];
    if(cont < num2 - 1)
       cout << vendas2[cont] << ", " ;
    }
    cout << " ]";

cin >> x1 >> x2;
bool seraqvendeu = se_vendeu(num1, vendas1[num1]);
if(seraqvendeu == true) {
    cout << "Sim, funcionário 1 vendeu um produto cujo valor foi" << x1;
    }
else {
    cout << "Não, funcionário 1 não vendeu um produto cujo valor foi" << x1;
    }

if(soma1 > soma2) {
    cout << "O melhor vendedor foi 1" << endl;
    }
else {
    cout << "O melhor vendedor foi 2" << endl;
}

return 0;
}

bool se_vendeu(int num, int vetor[]) {
int cont, contRepe = 0;

for(cont = 0; cont < num; cont++) {
    vetor[cont] = vetor[cont];
    if(vetor[cont] == x1) {
        contRepe += 1;
        }
}
    if(contRepe > 0) {
        return true;
    }
    else {
        return false;
    }
}


