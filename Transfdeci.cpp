#include <iostream>
using namespace std;

int convert_Decimal( int dec) {

    int res, binary = 0, i = 1;

    do {
        res = dec % 2;
        dec /= 2;
        binary += res * i;
        i *= 10;
    } while( dec != 0);
    return binary;
}

int main() {

int num;

cin >> num;

int i = 0, transl;


for(i = 0; i < num + 1; i++) {
    transl =  convert_Decimal( i );

}

cout << transl;

return 0;

}
