#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(4 * N - 1);
    for (auto &a : A) cin >> a;

    map<ll, ll> tbl;
    for (auto a : A) {
        tbl[a]++;
    }

    for (auto t : tbl) {
        if (t.second == 3) {
            cout << t.first << endl;
            break;
        }
    }

    return 0;
}