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

int main() {
    ll N, X;
    cin >> N >> X;
    vector<ll> a(N), b(N);
    REP(i, 0, N) {
        cin >> a[i] >> b[i];
    }
    
    vector<vector<bool>> dp(N + 1, vector<bool>(X + 200));
    dp[0][0] = true;

    REP(i, 0, N) {
        REP(j, 0, X) {
            if (dp[i][j]) {
                dp[i + 1][j + a[i]] = true;
                dp[i + 1][j + b[i]] = true;
            }
        }
    }


    if (dp[N][X]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}