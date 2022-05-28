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
    ll Q;
    cin >> Q;

    map<ll, ll> tbl;
    REP(i, 0, Q) {
        ll cmd;
        cin >> cmd;
        if (cmd == 1) {
            ll x;
            cin >> x;
            tbl[x]++;
        } else if (cmd == 2) {
            ll x, c;
            cin >> x >> c;
            tbl[x] -= c;
            if (tbl[x] <= 0) {
                tbl.erase(x);
            }
        } else if (cmd == 3) {
            auto minItr = tbl.begin();
            auto maxItr = tbl.end();
            maxItr--;
            ll ans = maxItr->first - minItr->first;
            cout << ans << endl;
        }
    }

    return 0;
}
