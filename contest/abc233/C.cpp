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

ll N, X;
vector<vector<ll>> a;
ll ans = 0;

void dfs(ll pos, ll prod) {
    if (pos == N) {
        if (prod == X) ans++;
        return;
    }

    FORE(ai, a[pos]) {
        if (prod * ai > X) continue;
        dfs(pos + 1, prod * ai);
    }
}

int main() {
    cin >> N >> X;
    vector<ll> L(N);
    a.resize(N);
    REP(i, 0, N) {
        cin >> L[i];
        REP(j, 0, L[i]) {
            ll A;
            cin >> A;
            a[i].push_back(A);
        }
    }

    dfs(0, 1);

    cout << ans << endl;

    return 0;
}
