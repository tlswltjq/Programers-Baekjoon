#include <iostream>
using namespace std;

int result = 1;
string text;
int sze, l, r;

int main(){
    cin >> text;
    sze = text.size();
    if (sze % 2 == 0) {
        l = sze / 2 - 1;
        r = l + 1;
    } else {
        l = r = sze / 2;
    }
    for (int i = 0; i <= l; i++) {
        if (text[l] != text[r]) {
            result = 0;
            break;
        }
        l--;
        r++;
    }

    cout << result << endl;
    return 0;
}
