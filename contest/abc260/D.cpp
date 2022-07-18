#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> P(N);
    FORE(p, P) cin >> p;

    vector<ll> ans(N + 1, -1);
    map<ll, vector<ll>> yama;
    REP(i, 0, N) {
        auto itr = yama.lower_bound(P[i]);
        if (itr != yama.end()) {
            yama[P[i]] = move(itr->second);
            yama.erase(itr);
        }
        yama[P[i]].push_back(P[i]);

        if (yama[P[i]].size() == K) {
            FORE(y, yama[P[i]]) ans[y] = i + 1;
            yama.erase(P[i]);
        }
    }

    REPEQ(i, 1, N) cout << ans[i] << endl;

    return 0;
}
