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
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> B(N, vector<ll>(M));
    REP(i, 0, N) REP(j, 0, M) cin >> B[i][j];

    REP(i, 0, N) REP(j, 0, M - 1) {
        if (B[i][j] + 1 != B[i][j + 1]) {
            cout << "No" << endl;
            return 0;
        }
    }

    REP(j, 0, M) REP(i, 0, N - 1) {
        if (B[i][j] + 7 != B[i + 1][j]) {
            cout << "No" << endl;
            return 0;
        }
    }

    REP(i, 0, M - 1) {
        if (B[0][i] % 7 == 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
