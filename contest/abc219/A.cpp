#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    if (X < 40) {
        cout << 40 - X << '\n';
    } else if (X < 70) {
        cout << 70 - X << '\n';
    } else if (X < 90) {
        cout << 90 - X << '\n';
    } else {
        cout << "expert\n";
    }
}
