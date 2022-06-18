#include <iostream>
#define TAM 30
using namespace std;


int matriz_trans(int x, int y, int M[TAM][TAM], int MT[TAM][TAM]);

int main () {

int numL, numC;

cin >> numL >> numC;

int i, j, A[TAM][TAM], AT[TAM][TAM];
for(i = 0; i < numL; i++) {
    for(j = 0; j < numC; j++) {
        cin >> A[i][j];
        }
    }
cout << "Matriz" << endl;
for(i = 0; i < numL; i++) {
    for(j = 0; j < numC; j++) {
       cout << A[i][j] << " ";
        }
        cout << endl;
    }

cout << "Transposta" << endl;
matriz_trans(numL, numC,  A, AT);

return 0;

}

int matriz_trans(int x, int y, int M[TAM][TAM], int MT[TAM][TAM]) {
int i, j;
for(j = 0; j < x; j++) {
    for(i = 0; i < y; i++) {
        MT[j][i] = M[i][j];
        cout << MT[j][i] << " ";
        }
        cout << endl;
    }
}
