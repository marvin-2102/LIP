#include <iostream>
using namespace std;

int main () {

int num;

cin >> num;

int cont, vetor[num];

for(cont = 0; cont < num; cont++) {
    cin >> vetor[cont];
    }
while(cont > 0){
    cout << vetor[cont - 1] << endl;
    cont -= 1;
    }
return 0;
}
