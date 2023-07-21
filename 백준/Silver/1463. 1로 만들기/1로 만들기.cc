#include <iostream>
#include <vector>
using namespace std;
vector<int> arr(1000001, -1); // 벡터를 이용하여 배열 선언 및 초기화
int n;
int main() {
    cin >> n;
    arr[1] = 0; // 시작점의 값은 0으로 초기화
    for (int i = 1; i <= n; i++) {
        if (i + 1 < 1000001)
            arr[i + 1] = (arr[i + 1] == -1) ? arr[i] + 1 : min(arr[i + 1], arr[i] + 1);
        if (2 * i < 1000001)
            arr[2 * i] = (arr[2 * i] == -1) ? arr[i] + 1 : min(arr[2 * i], arr[i] + 1);
        if (3 * i < 1000001)
            arr[3 * i] = (arr[3 * i] == -1) ? arr[i] + 1 : min(arr[3 * i], arr[i] + 1);
    }

    cout << arr[n];

    return 0;
}
