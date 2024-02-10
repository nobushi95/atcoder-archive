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
    ll P;
    cin >> P;
    
    vector<ll> fact(10);
    fact[0] = 1;
    REPEQ(i, 1, 10) fact[i] = fact[i - 1] * i;

    ll ans = 0;
    RREP(i, 10, 1) {
        while (P >= fact[i]) {
            ans++;
            P -= fact[i];
        }
    }

    cout << ans << endl;

    return 0;
}
