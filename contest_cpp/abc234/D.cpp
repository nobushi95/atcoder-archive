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
    vector<ll> P(N);
    FORE(p, P) cin >> p;

    set<ll> tbl;
    REP(i, 0, K) tbl.insert(P[i]);
    cout << *tbl.begin() << endl;

    REP(i, K, N) {
        if (*tbl.begin() < P[i]) {
            tbl.erase(*tbl.begin());
            tbl.insert(P[i]);
        }
        cout << *tbl.begin() << endl;
    }

    return 0;
}
