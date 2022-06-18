#include <iostream>
using namespace std;

void conjectura_collatz(int n, int& contp);

int main () {
	int n, contp = 1;
	cin >> n;
	cout << n << endl;
	conjectura_collatz(n, contp);
	cout << "Número de passos: " << contp;
	return 0;
}

void conjectura_collatz(int n, int& contp) {
    if(n % 2 == 0) {
        n /= 2;
        cout << n << endl;
    }
    else {
        n = (n * 3) + 1;
        cout << n << endl;
    }
    if(n > 1) {
        conjectura_collatz(n, contp);
        contp += 1;
    }
}
