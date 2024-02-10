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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

using mint = atcoder::modint998244353;

mint ans = 0;
ll A, B, C, D, E, F;
vector<ll> X, Y;

void dfs(ll x, ll y) {
    
}

int main() {
    ll N, M;
    cin >> N >> M >> A >> B >> C >> D >> E >> F;
    X.resize(M);
    Y.resize(M);
    REP(i, 0, M) cin >> X[i] >> Y[i];

    vector<pair<ll, ll>> d = {{A, B}, {C, D}, {E, F}};
    set<pair<ll, ll>> obstacle;
    REP(i, 0, M) obstacle.insert({X[i], Y[i]});

    map<pair<ll, ll>, mint> dp;
    dp[{0, 0}] = 1;
    REP(i, 0, N) {
        map<pair<ll, ll>, mint> new_dp;
        for (auto &[p, v] : dp) {
            auto [x, y] = p;
            for (auto &[dx, dy] : d) {
                if (obstacle.find({x + dx, y + dy}) == obstacle.end()) {
                    new_dp[{x + dx, y + dy}] += v;
                }
            }
        }
        dp = move(new_dp);
    }

    mint ans = 0;
    for (auto &[_, v] : dp) ans += v;
    cout << ans.val() << endl;

    return 0;
}
