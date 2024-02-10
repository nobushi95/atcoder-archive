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
    vector<ll> X(N), C(M), Y(M);
    FORE(x, X) cin >> x;
    REP(i, 0, M) cin >> C[i] >> Y[i];

    vector<ll> bonus(N + 1, 0);
    REP(i, 0, M) bonus[C[i]] = Y[i];

    vector<vector<ll>> dp(N + 100, vector<ll>(N + 100, 0));
    REPEQ(i, 1, N) {
        REPEQ(j, 1, i) {
            ll cur = dp[i - 1][j - 1] + X[i - 1] + bonus[j];
            chmax(dp[i][j], cur);
        }
        REPEQ(j, 1, i) {
            ll cur = dp[i - 1][j - 1] + bonus[0];
            chmax(dp[i][0], cur);
        }
    }

    ll ans = 0;
    REPEQ(i, 0, N) chmax(ans, dp[N][i]);

    cout << ans << endl;

    return 0;
}
