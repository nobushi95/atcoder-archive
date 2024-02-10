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
    vector<ll> x(3), y(3);
    REP(i, 0, 3) cin >> x[i] >> y[i];

    ll ansx;
    if (x[0] == x[1]) {
        ansx = x[2];
    } else if (x[0] == x[2]) {
        ansx = x[1];
    } else if (x[1] == x[2]) {
        ansx = x[0];
    }

    ll ansy;
    if (y[0] == y[1]) {
        ansy = y[2];
    } else if (y[0] == y[2]) {
        ansy = y[1];
    } else if (y[1] == y[2]) {
        ansy = y[0];
    }

    cout << ansx << " " << ansy << endl;

    return 0;
}
