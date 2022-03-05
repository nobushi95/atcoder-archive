#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S) cin >> s;
    map<string, ll> tbl;
    for (const auto &s : S) {
        tbl[s]++;
    }

    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        tbl[s]++;
    }

    for (const auto &s : S) {
        if (tbl[s] == 2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}