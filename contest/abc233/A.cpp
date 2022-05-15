#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int d = Y - X;
    if (d < 0) {
        cout << 0 << endl;
        return 0;
    }

    if (d % 10 == 0) {
        cout << d / 10 << endl;
    } else {
        cout << d / 10 + 1 << endl;
    }
    return 0;
}