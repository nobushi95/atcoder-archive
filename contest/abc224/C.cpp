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

int main() {
    ll N;
    cin >> N;
    vector<ll> X(N), Y(N);
    REP(i, 0, N) cin >> X[i] >> Y[i];

    ll ans = 0;
    REP(i, 0, N) REP(j, i + 1, N) REP(k, j + 1, N) {
        pair<ll, ll> v1 = {X[j] - X[i], Y[j] - Y[i]};
        pair<ll, ll> v2 = {X[k] - X[i], Y[k] - Y[i]};
        double s = abs(v1.first * v2.second - v1.second * v2.first) / 2.0;
        if (s > 0) ans++;
    }

    cout << ans << endl;

    return 0;
}
