#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    string abc;
    cin >> abc;
    int a, b, c;
    a = abc[0] - '0';
    b = abc[1] - '0';
    c = abc[2] - '0';

    int sum = stoi(abc);
    sum += b * 100 + c * 10 + a;
    sum += c * 100 + a * 10 + b;

    cout << sum << endl;

    return 0;
}