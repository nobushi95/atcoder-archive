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
    vector<ll> x(N), y(N);
    REP(i, 0, N) cin >> x[i] >> y[i];

    ll ans = 0;
    REP(i, 0, N) REP(j, i + 1, N) {
        ll dx = x[i] - x[j], dy = y[i] - y[j];
        auto a = double(dy) / dx;
        if (-1 <= a && a <= 1) ans++;
    }

    cout << ans << endl;

    return 0;
}
