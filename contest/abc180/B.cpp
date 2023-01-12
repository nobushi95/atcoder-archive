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
    vector<ll> x(N);
    FORE(xi, x) cin >> xi;

    ll ans1 = 0;
    FORE(xi, x) ans1 += abs(xi);
    cout << ans1 << endl;

    ll tmp = 0;
    FORE(xi, x) tmp += xi * xi;
    cout << fixed << setprecision(10) << sqrt(tmp) << endl;

    ll ans3 = 0;
    FORE(xi, x) chmax(ans3, abs(xi));
    cout << ans3 << endl;
    
    return 0;
}
