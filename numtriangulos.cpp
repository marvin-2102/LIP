#include <iostream>
using namespace std;


int contDivi(int n) {

conD = 0;

if(n % divi == 0) {
    contD += 1;
}else {

    divi

}
}


int num_triangule(int n1) {
   int res, cont = 1, divi = 1, contD = 0;
    while(contD < n1 + 1) {

       res = (cont *(cont + 1))/2;

        if(res % divi == 0) {
            contD += 1;
            divi += 1;
        }
        else {
            cont += 1;
            contD = 0;
            divi = 1;
        }
    }

return res;
}

int main() {

int num;

cin >> num;

int result;

result = num_triangule(num);

cout << "O primeiro número triangular com mais de " << num << " divisores é: " << result;

return 0;
}
