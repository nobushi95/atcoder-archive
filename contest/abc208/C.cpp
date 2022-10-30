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
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    vector<pair<ll, ll>> tbl(N);
    REP(i, 0, N) tbl[i] = {a[i], i};
    sort(ALL(tbl));

    ll quotient = K / N;
    ll remainder = K % N;
    vector<ll> ans(N, quotient);
    REP(i, 0, remainder) ans[tbl[i].second]++;

    FORE(aa, ans) cout << aa << endl;

    return 0;
}
