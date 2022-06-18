#include <iostream>
using namespace std;

int main () {

int num;

cin >> num;

int cont;
double vetor[num], sum = 0;
for(cont = 0; cont < num; cont++) {
    cin >> vetor[cont];
    sum = sum + vetor[cont];
}

double media = sum / num;
cout << "Media: " << media << endl;

int vAcima = 0;
for(cont = 0; cont < num; cont++) {
    if(vetor[cont] > media) {
        vAcima += 1;
    }
}
cout << "Valores acima da media: " << vAcima;

return 0;
}
