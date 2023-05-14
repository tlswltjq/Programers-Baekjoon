#include <iostream>
using namespace std;

long long pow_mod(long long a, long long b, long long c);

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << pow_mod(a, b, c) << endl;
    return 0;
}

long long pow_mod(long long a, long long b, long long c) {
    if (b == 0) return 1;
    long long temp = pow_mod(a, b/2, c);
    temp = (temp * temp) % c;
    if (b % 2 == 1) temp = (temp * a) % c;
    return temp;
}
