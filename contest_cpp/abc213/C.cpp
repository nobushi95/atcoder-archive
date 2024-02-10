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
    ll H, W, N;
    cin >> H >> W >> N;
    vector<ll> A(N), B(N);
    REP(i, 0, N) cin >> A[i] >> B[i];

    map<ll, ll> tbl1, tbl2;
    FORE(a, A) tbl1[a] = 1;
    FORE(b, B) tbl2[b] = 1;

    ll idx1 = 1, idx2 = 1;
    FORE(t, tbl1) {
        t.second = idx1;
        idx1++;
    }
    FORE(t, tbl2) {
        t.second = idx2;
        idx2++;
    }

    FORE(a, A) a = tbl1[a];
    FORE(b, B) b = tbl2[b];

    REP(i, 0, N) cout << A[i] << " " << B[i] << endl;

    return 0;
}
