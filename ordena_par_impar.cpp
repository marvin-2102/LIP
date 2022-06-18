#include <iostream>
#define TAM 100
using namespace std;

void ordena_par_impar() {
    int n, nums[TAM], i;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> nums [i];
    }
    cout << "[ ";
    for(i = 0; i < n; i++) {
        cout << nums[i];
        if(i < n - 1)
            cout << " , ";
    }
    cout << " ]" << endl;
    int j, k, numsP[TAM], numsI[TAM];
    for(i = 0, j = 0, k = 0; i < n; i++) {
            if(i % 2 == 0) {
                numsP[j] = nums[i];
                j += 1;
            }
            else {
                numsI[k] = nums[i];
                k += 1;
            }
}
    int aux;
    if(n % 2 == 0) {
    for(i = 0; i < n / 2; i++) {
        for(j = i + 1; j < n / 2; j++) {
            if(numsP[i] > numsP[j]) {
                aux = numsP[i];
                numsP[i] = numsP[j];
                numsP[j] = aux;
            }
        }
    }
}

    else{
        for(i = 0; i < n / 2 + 2; i++) {
        for(j = i + 1; j < n / 2 + 2; j++) {
            if(numsP[i] > numsP[j]) {
                aux = numsP[i];
                numsP[i] = numsP[j];
                numsP[j] = aux;
            }
        }
    }
}

    for(i = 0; i < n / 2; i++) {
        for(j = 0; j < n / 2; j++) {
            if(numsI[i] > numsI[j]) {
                aux = numsI[i];
                numsI[i] = numsI[j];
                numsI[j] = aux;
                }
            }
        }


   for(i = 0, j = 0, k = 0; i < n; i++) {
        if(i % 2 == 0) {
            nums[i] = numsP[j];
            j += 1;
        }
        else {
            nums[i] = numsI[k];
            k += 1;
        }
    }
    cout << "[ ";
    for(i = 0; i < n; i++) {
        cout << nums[i];
        if(i < n - 1)
            cout << " , ";
    }
    cout << " ]";

}

int main () {

    ordena_par_impar();

    return 0;
}
