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
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    sort(ALL(B));

    ll ans = infl;
    REP(i, 0, N) {
        ll idx = lower_bound(ALL(B), A[i]) - B.begin();
        if (idx < M) chmin(ans, abs(A[i] - B[idx]));
        if (idx - 1 >= 0) chmin(ans, abs(A[i] - B[idx - 1]));
    }

    cout << ans << endl;

    return 0;
}
