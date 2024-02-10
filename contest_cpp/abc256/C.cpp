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
    vector<ll> h(3), w(3);
    FORE(hi, h) cin >> hi;
    FORE(wi, w) cin >> wi;

    ll ans = 0;
    REPEQ(a00, 1, 30) REPEQ(a01, 1, 30) REPEQ(a02, 1, 30) {
        if (a00 + a01 + a02 != h[0]) continue;
        REPEQ(a10, 1, 30) REPEQ(a11, 1, 30) REPEQ(a12, 1, 30) {
            if (a10 + a11 + a12 != h[1]) continue;
            ll a20 = w[0] - (a10 + a00);
            ll a21 = w[1] - (a11 + a01);
            ll a22 = w[2] - (a12 + a02);
            if (1 > a20 || 30 < a20) continue;
            if (1 > a21 || 30 < a21) continue;
            if (1 > a22 || 30 < a22) continue;
            if (a20 + a21 + a22 != h[2]) continue;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
