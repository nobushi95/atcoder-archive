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

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    map<ll, ll> tbl;
    tbl[1] = 0;

    REP(i, 0, N) {
        ll cur = i + 1;
        tbl[cur * 2] = tbl[A[i]] + 1;
        tbl[cur * 2 + 1] = tbl[A[i]] + 1;
    }

    REPEQ(k, 1, 2 * N + 1) {
        cout << tbl[k] << endl;
    }

    return 0;
}
