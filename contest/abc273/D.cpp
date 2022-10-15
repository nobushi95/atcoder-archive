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
    ll H, W, rs, cs, N;
    cin >> H >> W >> rs >> cs >> N;
    vector<ll> r(N), c(N);
    REP(i, 0, N) cin >> r[i] >>c[i];
    ll Q;
    cin >> Q;
    vector<char> d(Q);
    vector<ll> l(Q);
    REP(i, 0, Q) cin >> d[i] >>l[i];

    map<ll, set<ll>> tblR, tblD;
    REP(i, 0, N) tblR[r[i]].insert(c[i]);
    REP(i, 0, N) tblD[c[i]].insert(r[i]);
    map<ll, set<ll, greater<ll>>> tblL, tblU;
    REP(i, 0, N) tblL[r[i]].insert(c[i]);
    REP(i, 0, N) tblU[c[i]].insert(r[i]);

    REP(i, 0, Q) {
        if (d[i] == 'L') {
            auto itr = tblL[rs].upper_bound(cs);
            if (itr == tblL[rs].end()) {
                cs = max(1LL, cs - l[i]);
            } else {
                cs = max(cs - l[i], *itr + 1);
                chmax(cs, 1LL);
            }
        } else if (d[i] == 'R') {
            auto itr = tblR[rs].upper_bound(cs);
            if (itr == tblR[rs].end()) {
                cs = min(W, cs + l[i]);
            } else {
                cs = min(cs + l[i], *itr - 1);
                chmin(cs, W);
            }
        } else if (d[i] =='U') {
            auto itr = tblU[cs].upper_bound(rs);
            if (itr == tblU[cs].end()) {
                rs = max(1LL, rs - l[i]);
            } else {
                rs = max(rs - l[i], *itr + 1);
                chmax(rs, 1LL);
            }
        } else if (d[i] =='D') {
            auto itr = tblD[cs].upper_bound(rs);
            if (itr == tblD[cs].end()) {
                rs = min(H, rs + l[i]);
            } else {
                rs = min(rs + l[i], *itr - 1);
                chmin(rs, H);
            }
        }

        cout << rs << " " << cs << endl;
    }

    return 0;
}
