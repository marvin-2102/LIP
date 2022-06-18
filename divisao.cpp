#include <iostream>
using namespace std;

void division(int x, int y, int& q, int& r);
int result_quo(int x, int y);
int result_res(int x, int y);

int main () {

int a, b, q, r;

cin >> a >> b;
division(a,  b,  q,  r);
cout << "Q = " << q << endl;
cout << "R = " << r;


return 0;
}

void division(int x, int y, int& q, int& r){

q = result_quo(x, y);
r = result_res(x, y);
}

int result_quo(int x, int y) {

int quo;

quo = x / y;

return quo;
}

int result_res(int x, int y) {

int res;

res = x % y;

return res;

}
