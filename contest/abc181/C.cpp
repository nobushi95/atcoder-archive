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

    REP(i, 0, N) REP(j, i + 1, N) REP(k, j + 1, N) {
        auto x1 = x[i], x2 = x[j], x3 = x[k];
        auto y1 = y[i], y2 = y[j], y3 = y[k];
        x1 -= x3;
        x2 -= x3;
        y1 -= y3;
        y2 -= y3;
        if (x1 * y2 == x2 * y1) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
