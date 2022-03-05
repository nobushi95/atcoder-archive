#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    string S;
    cin >> S;
    int a, b;
    cin >> a >> b;

    char sa = S[a - 1];
    char sb = S[b - 1];
    S[a - 1] = sb;
    S[b - 1] = sa;

    cout << S << endl;

    return 0;
}