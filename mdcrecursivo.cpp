#include <iostream>
using namespace std;

int MDC(int x, int y);

int main () {
	int mdc, x, y;
	cin >> x >> y;
	mdc = MDC(x, y);
	cout << "MDC(" << x << " , " << y << ") = " << mdc;
	return 0;
}

int MDC(int x, int y) {
    if(y == 0) {
        return x;
    }
    else {
        return MDC(y, (x % y));
    }
}
