#include <iostream>
using namespace std;

int main () {

int num;

cin >> num;

int vetor1[num], vetor2[num], sum[num], cont;

if(num > 1) {
    for(cont = 0; cont < num; cont++) {
    cin >> vetor1[cont];

}
    for(cont = 0; cont < num; cont++) {
    cin >> vetor2[cont];
    }
    cout << "[ ";
    for(cont = 0; cont < num; cont++) {
    sum[cont] = vetor1[cont] + vetor2[cont];
    cout << sum[cont];
    if(cont < num - 1)
        cout << ", ";
    }
    cout << " ]";
}
else {
for(cont = 0; cont < num; cont++) {
    cin >> vetor1[cont];
    cin >> vetor2[cont];
    sum[cont] = vetor1[cont] + vetor2[cont];
    }
cout << sum[cont - 1];
}
return 0;
    }
