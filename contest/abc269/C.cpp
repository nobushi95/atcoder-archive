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

void dfs(set<ll> &ans, bitset<62> n, ll pos) {
    if (pos == 62) return;

    ans.insert(n.to_ullong());
    dfs(ans, n, pos + 1);
    if (n[pos]) {
        n.reset(pos);
        ans.insert(n.to_ullong());
        dfs(ans, n, pos + 1);
    }
}

int main() {
    ll N;
    cin >> N;
    set<ll> ans;

    bitset<62> n = N;
    dfs(ans, n, 0);

    FORE(a, ans) cout << a << endl;
    return 0;
}
