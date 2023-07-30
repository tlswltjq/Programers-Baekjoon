#include <iostream>
using namespace std;

long long padovan[101] = {1, 1, 1};

void calculatePadovan() {
    for (int i = 3; i < 101; i++) {
        padovan[i] = padovan[i - 3] + padovan[i - 2];
    }
}
int main() {
    int t, n;
    cin >> t;
    calculatePadovan();
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << padovan[n-1] << endl;
    }
    return 0;
}
