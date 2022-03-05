#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;
    vector<ll> a(N);
    for (auto &ai : a) cin >> ai;
    vector<ll> x(Q), k(Q);
    for (int i = 0; i < Q; i++) cin >> x.at(i) >> k.at(i);

    map<pair<ll, ll>, ll> tbl;
    map<ll, ll> subTbl;
    for (int i = 0; i < N; i++) {
        tbl[make_pair(a.at(i), subTbl[a.at(i)] + 1)] = i;
        subTbl[a.at(i)]++;
    }

    for (int i = 0; i < Q; i++) {
        pair<ll, ll> q(x.at(i), k.at(i));
        decltype(tbl)::iterator itr = tbl.find(q);
        if (itr == tbl.end()) {
            cout << -1 << endl;
            continue;
        }
        cout << tbl[q] + 1 << endl;
    }

    return 0;
}