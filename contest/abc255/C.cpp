#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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
    ll X, A, D, N;
    cin >> X >> A >> D >> N;

    if (D == 0) {
        cout << abs(X - A) << endl;
        return 0;
    }

    ll maxA = D > 0 ? A + D * (N - 1) : A;
    ll minA = D > 0 ? A : A + D * (N - 1);

    if (X >= maxA) {
        cout << abs(maxA - X) << endl;
        return 0;
    }

    if (X <= minA) {
        cout << abs(minA - X) << endl;
        return 0;
    }

    ll ans = infl;
    ll n = (X - A) / D;

    REPEQ(i, n - 1, n + 1) {
        if (i < 0) continue;
        if (i > (N - 1)) continue;
        ll a = A + D * i;
        chmin(ans, abs(X - a));
    }

    cout << ans << endl;

    return 0;
}
