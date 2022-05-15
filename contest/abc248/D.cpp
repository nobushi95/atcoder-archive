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
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    map<ll, vector<ll>> tbl;
    REP(i, 0, N) {
        tbl[A[i]].push_back(i);
    }

    ll Q;
    cin >> Q;
    REP(i, 0, Q) {
        ll L, R, X;
        cin >> L >> R >> X;
        L--; R--;
        auto litr = lower_bound(ALL(tbl[X]), L);
        auto ritr = upper_bound(ALL(tbl[X]), R);
        ll ans = ritr - litr;
        cout << ans << endl;
    }

    return 0;
}
