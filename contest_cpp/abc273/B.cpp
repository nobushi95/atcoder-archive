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
    ll X, K;
    cin >> X >> K;

    ll ans = X;
    REP(i, 0, K) {
        ll cur = pow(10LL, i);
        ll n = ans / cur;
        if (n == 0) {
            ans = 0;
            continue;
        }
        if (n % 10 >= 5) {
            ans = ((n / 10) + 1) * cur * 10;
        } else {
            ans = (n / 10) * cur * 10;
        }
    }

    cout << ans << endl;

    return 0;
}
