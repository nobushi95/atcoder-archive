#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    int N;
    cin >> N;
    map<pair<int, int>, ll> A;
    for (int i = 1; i <= 2 * N - 1; i++) {
        for (int j = i + 1; j <= 2 * N; j++) {
            ll a;
            cin >> a;
            A[make_pair(i, j)] = a;
        }
    }

    return 0;
}