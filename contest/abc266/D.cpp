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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N;
    cin >> N;
    vector<ll> T(N), X(N), A(N);
    REP(i, 0, N) cin >> T[i] >> X[i] >> A[i];

    map<pair<ll, ll>, ll> tbl;
    REP(i, 0, N) {
        tbl[{T[i], X[i]}] = A[i];
    }

    ll t = T.back();

    vector<vector<pair<bool, ll>>> dp(t + 100, vector<pair<bool, ll>>(5, {false, 0}));
    dp[0][0] = {true, 0};
    REPEQ(i, 1, t) {
        REPEQ(j, 0, 4) {
            ll plus = 0;
            if (tbl.find({i, j}) != tbl.end()) plus = tbl[{i, j}];
            if (j != 0 and dp[i - 1][j - 1].first) {
                dp[i][j].first = true;
                ll next = dp[i - 1][j - 1].second + plus;
                chmax(dp[i][j].second, next);
            }
            if (dp[i - 1][j].first) {
                dp[i][j].first = true;
                ll next = dp[i - 1][j].second + plus;
                chmax(dp[i][j].second, next);
            }
            if (j != 4 and dp[i - 1][j + 1].first) {
                dp[i][j].first = true;
                ll next = dp[i - 1][j + 1].second + plus;
                chmax(dp[i][j].second, next);
            }
        }
    }

    ll ans = 0;
    REPEQ(i, 0, 4) if (dp[t][i].first) chmax(ans, dp[t][i].second);

    cout << ans << endl;

    return 0;
}
