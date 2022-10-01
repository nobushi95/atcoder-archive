#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll N, Q;
    cin >> N >> Q;
    vector<vector<ll>> a(N);
    REP(i, 0, N) {
        ll l;
        cin >> l;
        a[i].resize(l);
        REP(j, 0, l) cin >> a[i][j];
    }
    vector<ll> s(Q), t(Q);
    REP(i, 0, Q) cin >> s[i] >> t[i];

    REP(i, 0, Q) {
        cout << a[s[i] - 1][t[i] - 1] << endl;
    }

    return 0;
}
