#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int L, R;
    string S;
    cin >> L >> R;
    cin >> S;

    reverse(S.begin() + L - 1, S.begin() + R);

    cout << S << endl;

    return 0;
}