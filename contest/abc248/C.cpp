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

    vector<vector<mint>> dp(N + 1, vector<mint>(K + M + 1, mint(0)));
    dp[0][0] = 1;
    REP(i, 0, N) {
        REPEQ(sum, 0, K) {
            REPEQ(next, 1, M) {
                dp[i + 1][sum + next] += dp[i][sum];
            }
        }
    }

    mint ans = 0;
    REPEQ(sum, N, K) ans += dp[N][sum];

    cout << ans.val() << endl;

    return 0;
}
