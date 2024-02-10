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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

using mint = atcoder::modint998244353;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;

    vector<vector<mint>> dp(N + 100, vector<mint>(M + 100));
    REPEQ(i, 1, M) {
        dp[0][i] = 1;
    }

    REP(i, 0, N - 1) {
        vector<mint> acc(M + 1, 0);
        acc[1] = dp[i][1];
        REPEQ(j, 2, M) {
            acc[j] = acc[j - 1] + dp[i][j];
        }
        
        REPEQ(j, 1, M) {
            if (K == 0) {
                dp[i + 1][j] += acc[M];
            } else {
                if (j - K >= 1) {
                    dp[i + 1][j] += acc[j - K];
                }
                if (j + K <= M) {
                    dp[i + 1][j] += acc[M] - acc[j + K - 1];
                }
            }
        }
    }

    mint ans = 0;
    REPEQ(i, 1, M) {
        ans += dp[N - 1][i];
    }

    cout << ans.val() << endl;

    return 0;
}
