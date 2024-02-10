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

    map<ll, set<ll>> tbl;
    REP(i, 0, N) {
        tbl[A[i]].insert(i);
    }

    sort(ALL(A));

    ll ans = 0;
    REP(j, 1, N - 1) {
        ll aj = A[j];
        auto aiItr = lower_bound(ALL(A), aj);
        if (aiItr == A.begin()) continue;
        ll leftNum = distance(A.begin(), aiItr);
        auto akItr = upper_bound(ALL(A), aj);
        if (akItr == A.end()) continue;
        ll rightNum = distance(akItr, A.end());
        ans += leftNum * rightNum;
    }

    cout << ans << endl;

    return 0;
}
