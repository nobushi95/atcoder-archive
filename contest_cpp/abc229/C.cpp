#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
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
    ll N, W;
    cin >> N >> W;
    vector<ll> A(N), B(N);
    REP(i, 0, N) cin >> A[i] >> B[i];

    vector<pair<ll, ll>> cheese(N);
    REP(i, 0, N) cheese[i] = {A[i], B[i]};
    sort(ALL(cheese), greater<>());

    ll ans = 0;
    REP(i, 0, N) {
        ll d = cheese[i].first;
        ll w = cheese[i].second;
        if (w <= W) {
            ans += d * w;
            W -= w;
        } else {
            ans += d * W;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
