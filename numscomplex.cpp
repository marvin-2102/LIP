#include <iostream>
#include <math.h>
#define TAM 100
using namespace std;

struct num_complexo {
    double num_real;
    double num_complex;
};

void imprime_complex(int n, num_complexo vetor[TAM]);
void conjugado(int n, num_complexo vetor[TAM]);
void modulo(int n, num_complexo vetor[TAM]);
void compara(int n, num_complexo vetor[TAM]);
void soma_complex(int n, num_complexo vetor[TAM]);

int main () {
	int n;
	cin >> n;
	int i;
	num_complexo vetor[TAM];
	for(i = 0; i < 2 * n; i++) {
        if(i % 2 != 0)
            cin >> vetor[i].num_complex;
        else
            cin >> vetor[i].num_real;
	}

	imprime_complex(n, vetor);
	conjugado(n, vetor);
    modulo(n, vetor);
    compara(n, vetor);
    soma_complex(n, vetor);

	return 0;
}

void imprime_complex(int n, num_complexo vetor[TAM]) {

    int i;
    for(i = 0; i < 2 * n; i++) {
        if(i % 2 != 0 && vetor[i].num_complex > 0)
            cout << " + " << vetor[i].num_complex << "i" << endl;

        else if(i % 2 != 0 && vetor[i].num_complex < 0)
            cout << " - " << -1 * vetor[i].num_complex << "i" << endl;

        else
            cout << vetor[i].num_real;
    }
}

void conjugado(int n, num_complexo vetor[TAM]) {

    int i;
    for(i = 0; i < 2; i++) {
        if(i % 2 != 0 && vetor[i].num_complex > 0)
            cout << " - " << vetor[i].num_complex << "i" << endl;

        else if(i % 2 != 0 && vetor[i].num_complex < 0)
            cout << " + " << -1 * vetor[i].num_complex << "i" << endl;

        else
            cout << "conjugado = " << vetor[i].num_real;
    }
}

void modulo(int n, num_complexo vetor[TAM]) {

   int i, cont = 0;
   double aux1, aux2;
   for(i = 0; i < 2; i++) {
        if(i % 2 == 0)
            aux1 = vetor[i].num_real;
        else
            aux2 = vetor[i].num_complex;
   }

   cout << "módulo = " << sqrt(pow(aux1, 2) + pow(aux2, 2)) << endl;

}

void compara(int n, num_complexo vetor[TAM]) {
    int i, aux1[TAM], aux2[TAM];
    for(i = 0; i < 4; i++) {
        if(i % 2 == 0) {
            aux1[i] = vetor[i].num_real;
        }
        else {
            aux2[i] = vetor[i].num_complex;
        }
    }
    i = 0;
    if(aux1[i] == aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] > 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] < 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;

    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] > 0)
        cout << aux1[i] << " - " << -1 * aux2[i + 1] << "i" << " é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] < 0)
         cout << aux1[i] << " - " << -1 * aux2[i + 1]<< "i"  << " é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;


    else if((aux1[i] != aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] > 0))
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] < 0)
        cout << aux1[i] << " - " << -1 * aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;

    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] < 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;

    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] == aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] < 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;


    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] > 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] < 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;

    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] > 0)
        cout << aux1[i] << " - " << -1 * aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] == aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] < 0)
         cout << aux1[i] << " - " << -1 * aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;


    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] > 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i"  << " não é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] > 0 && aux2[i + 3] < 0)
        cout << aux1[i] << " + " << aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;

    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] > 0)
        cout << aux1[i] << " - " << -1 * aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " + " << aux2[i + 3] << "i" << endl;

    else if(aux1[i] != aux1[i + 2] && aux2[i + 1] != aux2[i + 3] && aux2[i + 1] < 0 && aux2[i + 3] < 0)
         cout << aux1[i] << " - " << -1 * aux2[i + 1] << "i" << " não é igual a " << aux1[i + 2] << " - " << -1 * aux2[i + 3] << "i" << endl;


}

void soma_complex(int n, num_complexo vetor[TAM]) {

    int i, somaR = 0, somaC = 0;
    for(i = 0; i < 2 * n; i++) {
        if(i % 2 !=0 ) {
            somaC += vetor[i].num_complex;
        }
        else {
            somaR += vetor[i].num_real;
        }
    }
    if(somaC > 0)
        cout << "a soma dos complexos é "<< somaR << " + " << somaC << "i";

    else if(somaC == 0)
        cout << "a soma dos complexos é " << somaR << " + " << somaC << "i";

    else
        cout << "a soma dos complexos é " << somaR << " - " << -1 * somaC << "i";
}
