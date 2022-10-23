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
    ll N, x, y;
    cin >> N >> x >> y;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    ll offset = 10000;

    vector<vector<bool>> dpx(N + 1, vector<bool>(2 * offset + 1, false));
    vector<vector<bool>> dpy(N + 1, vector<bool>(2 * offset + 1, false));
    dpx[0][offset] = true;
    dpy[0][offset] = true;
    dpx[1][offset + A[0]] = true;
    dpy[1][offset] = true;
    REP(i, 1, N) {
        ll a = A[i];
        if (i % 2 == 0) {
            REP(xx, 0, 2 * offset) {
                if (dpx[i][xx]) {
                    dpx[i + 1][xx + a] = true;
                    dpx[i + 1][xx - a] = true;
                }
            }
            REP(yy, 0, 2 * offset) if (dpy[i][yy]) dpy[i + 1][yy] = true;
        } else {
            REP(yy, 0, 2 * offset) {
                if (dpy[i][yy]) {
                    dpy[i + 1][yy + a] = true;
                    dpy[i + 1][yy - a] = true;
                }
            }
            REP(xx, 0, 2 * offset) if (dpx[i][xx]) dpx[i + 1][xx] = true;
        }
    }


    if (dpx[N][offset + x] and dpy[N][offset + y]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
