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
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<vector<ll>> dp(N + 1, vector<ll>(M + 1, -infl));
    dp[0][0] = 0;

    REPEQ(i, 1, N) {
        REPEQ(j, 0, M) {
            if (j == 0) dp[i][0] = 0;
            else if (j > i) dp[i][j] = -infl;
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] + A[i - 1] * j);
        }
    }

    ll ans = -infl;
    REPEQ(i, 1, N) chmax(ans, dp[i][M]);

    cout << ans << endl;

    return 0;
}
