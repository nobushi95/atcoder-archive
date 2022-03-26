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

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N), B(N);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    vector<vector<bool>> dp(N + 100, vector<bool>(2, false));
    dp[0][0] = true;
    dp[0][1] = true;

    REP(i, 1, N) {
        if (dp[i - 1][0]) {
            if (abs(A[i - 1] - A[i]) <= K) dp[i][0] = true;
            if (abs(A[i - 1] - B[i]) <= K) dp[i][1] = true;
        }
        if (dp[i - 1][1]) {
            if (abs(B[i - 1] - A[i]) <= K) dp[i][0] = true;
            if (abs(B[i - 1] - B[i]) <= K) dp[i][1] = true;
        }
    }

    if (dp[N - 1][0] || dp[N - 1][1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
