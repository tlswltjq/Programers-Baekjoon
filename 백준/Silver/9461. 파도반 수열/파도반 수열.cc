#include <iostream>
using namespace std;

long long padovan[101] = {1, 1, 1}; // long long 타입으로 변경하여 오버플로우 방지

// 파도반 수열을 계산하는 함수
void calculatePadovan() {
    for (int i = 3; i < 101; i++) {
        padovan[i] = padovan[i - 3] + padovan[i - 2];
    }
}

int main() {
    int t, n;
    cin >> t;

    calculatePadovan(); // 파도반 수열을 미리 계산해둡니다.

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << padovan[n-1] << endl;
    }

    return 0;
}
