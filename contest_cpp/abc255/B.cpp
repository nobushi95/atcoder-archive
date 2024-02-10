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

double dist(ll x1, ll y1, ll x2, ll y2) {
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(K);
    REP(i, 0, K) {
        ll a;
        cin >> a;
        a--;
        A[i] = a;
    }
    vector<ll> X(N), Y(N);
    REP(i, 0, N) cin >> X[i] >> Y[i];

    double ans = 0.0;
    REP(i, 0, N) {
        if (find(ALL(A), i) != A.end()) continue;
        double cur = inf;
        FORE(a, A) {
            if (i == a) continue;
            double d = dist(X[a], Y[a], X[i], Y[i]);
            chmin(cur, d);
        }
        chmax(ans, cur);
    }

    cout << fixed << setprecision(7) << ans << endl;

    return 0;
}
