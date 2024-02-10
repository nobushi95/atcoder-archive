#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
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
    vector<ll> T(N), K(N);
    vector<vector<ll>> A(N);
    REP(i, 0, N) {
        cin >> T[i];
        cin >> K[i];
        A[i].resize(K[i]);
        REP(j, 0, K[i])  cin >> A[i][j];
    }

    vector<bool> need(N, false);
    need[N - 1] = true;
    ll ans = 0;
    RREP(i, N - 1, 0) {
        if (need[i]) {
            ans += T[i];
            REP(j, 0, K[i]) need[A[i][j] - 1] = true;
        }
    }

    cout << ans << endl;

    return 0;
}
