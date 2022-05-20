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
    ll N;
    cin >> N;
    vector<ll> x(N), y(N);
    REP(i, 0, N) cin >> x[i] >> y[i];

    double ans = 0.0;
    REP(i, 0, N) REP(j, i + 1, N) {
        ll dx = abs(x[i] - x[j]);
        ll dy = abs(y[i] - y[j]);
        double d = sqrt(dx * dx + dy * dy);
        chmax(ans, d);
    }

    cout << fixed << setw(7) << ans << endl;

    return 0;
}
