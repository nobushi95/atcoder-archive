#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> U(M), V(M);
    REP(i, 0, M) cin >> U[i] >> V[i];

    vector<vector<bool>> tbl(N + 1, vector<bool>(N + 1, false));
    REP(i, 0, M) {
        tbl[U[i]][V[i]] = true;
        tbl[V[i]][U[i]] = true;
    }

    ll ans = 0;
    REPEQ(a, 1, N) REPEQ(b, a + 1, N) REPEQ(c, b + 1, N) {
        if (tbl[a][b] and tbl[b][c] and tbl[c][a]) ans++;
    }

    cout << ans << endl;

    return 0;
}
