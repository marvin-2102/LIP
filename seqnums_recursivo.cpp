#include <iostream>
using namespace std;

int seqnums(int num, int an);

int main () {
    int n;
    cin >> n;
    int result = seqnums(n, result);
    cout << "a" << n << " = " << result;

	return 0;
}

int seqnums(int num, int an) {
    int n = 3, a1 = 2, a2 = 3;
    if(num == 1)
        return 2;


    else if(num == 2)
        return 3;


    else if(n != num){
    an = seqnums(num, 3 * a1 + a2);
    a1 = a2;
    a2 = an;
    n += 1;
    return an;

    }

}
