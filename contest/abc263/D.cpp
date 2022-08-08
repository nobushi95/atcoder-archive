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
    ll N, L, R;
    cin >> N >> L >> R;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<ll> acc;
    acc.push_back(0);
    FORE(a, A) acc.push_back(acc.back() + a);

    vector<ll> left(N + 1);
    REP(i, 0, N + 1) {
        left[i] = i * L - acc[i];
    }

    vector<ll> right(N + 1);
    REP(i, 0, N + 1) {
        right[i] = (N - i) * R + acc[i];
    }

    auto rightmin = right;
    RREP(i, N - 1, 0) {
        chmin(rightmin[i], rightmin[i + 1]);
    }

    ll ans = L * N;
    REPEQ(l, 0, N) {
        ll tmp = left[l] + rightmin[l];
        chmin(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}
