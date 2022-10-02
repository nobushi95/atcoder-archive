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
    ll N, S;
    cin >> N >> S;
    vector<ll> a(N), b(N);
    REP(i, 0, N) cin >> a[i] >> b[i];

    vector<vector<bool>> dp(N + 10, vector<bool>(S + 10, false));
    dp[0][0] = true;
    REPEQ(i, 1, N) {
        REPEQ(j, 0, S) {
            if (dp[i - 1][j]) {
                if (j + a[i - 1] <= S) dp[i][j + a[i - 1]] = true;
                if (j + b[i - 1] <= S) dp[i][j + b[i - 1]] = true;
            }
        }
    }

    if (!dp[N][S]) {
        cout << "No" << endl;
        return 0;
    }

    deque<char> ans;
    ll cur = S;
    RREP(i, N - 1, 0) {
        if (cur >= a[i] && dp[i][cur - a[i]]) {
            ans.push_front('H');
            cur -= a[i];
        } else {
            ans.push_front('T');
            cur -= b[i];
        }
    }

    cout << "Yes" << endl;
    FORE(a, ans) cout << a;
    cout << endl;

    return 0;
}
