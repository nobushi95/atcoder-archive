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

using mint = atcoder::modint998244353;

int main() {
    ll N;
    cin >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    mint ans = 0;

    REPEQ(i, 1, N) {
        vector<vector<vector<mint>>> dp(N + 1, vector<vector<mint>>(i + 1, vector<mint>(i, 0)));
        dp[0][0][0] = 1;
        REP(j, 0, N) REPEQ(k , 0, i) REP(l, 0, i) {
            dp[j + 1][k][l] += dp[j][k][l];
            if (k != i) dp[j + 1][k + 1][(l + a[j]) % i] += dp[j][k][l];
        }
        ans += dp[N][i][0];
    }

    cout << ans.val() << endl;

    return 0;
}
