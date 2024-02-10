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

    vector<double> L(N), R(N);
    REP(i, 0, N) {
        ll t;
        cin >> t >> L[i] >> R[i];

        if (t == 2) R[i] -= 0.5;
        else if (t == 3) L[i] += 0.5;
        else if (t == 4) {
            L[i] += 0.5;
            R[i] -= 0.5;
        }
    }

    ll ans = 0;
    REP(i, 0, N) REP(j, i + 1, N) ans += ((max(L[i], L[j])) <= min(R[i], R[j]));

    cout << ans << endl;

    return 0;
}
