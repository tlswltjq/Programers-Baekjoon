#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
        }

        if (result == 0) {
            result = 10;
        }

        cout << result << endl;
    }

    return 0;
}
