#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

ll dp[20000000][10] = {0};

int main() {
    ll N;
    cin >> N;

    REPEQ(i, 1, 9) dp[1][i] = 1;

    REPEQ(i, 2, N) {
        REPEQ(j, 1, 9) {
            REPEQ(k, max(1LL, j - 1), min(9LL, j + 1)) {
                dp[i][j] += dp[i - 1][k];
                dp[i][j] %= 998244353;
            }
        }
    }

    ll ans = 0;
    REPEQ(i, 1, 9) {
        ans += dp[N][i];
        ans %= 998244353;
    }

    cout << ans << endl;

    return 0;
}
