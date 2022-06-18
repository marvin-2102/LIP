#include <iostream>
using namespace std;

int main () {

	int n, cont = 0, Pn, Sn, aux;
	cin >> n;
	do {
        if(cont == 0) {
            Pn = n;
            Sn = n;
        }
        else {
            if(n < Pn)
                Pn = n;
                if(n > Sn && n < aux)
                    Sn = n;
        }
        cont += 1;
        cin >> n;
        aux = n;
    }while(n != 0);
	cout << "Menor: " << Pn  << endl << "Segundo menor: " << Sn;
	return 0;
}
