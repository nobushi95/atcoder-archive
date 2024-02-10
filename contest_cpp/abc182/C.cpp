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
    string N;
    cin >> N;

    vector<ll> count(3, 0);
    FORE(n, N) {
        ll rem = (n - '0') % 3;
        count[rem]++;
    }

    ll cur = (count[1] + count[2] * 2) % 3;
    ll k = N.length();
    ll ans = 0;
    if (cur == 0) ans = 0;
    else if (cur == 1) {
        if (count[1] > 0) {
            if (k == 1) ans = -1;
            else ans = 1;
        } else {
            if (k == 2) ans = -1;
            else ans = 2;
        }
    } else if (cur == 2) {
        if (count[2] > 0) {
            if (k == 1) ans = -1;
            else ans = 1;
        } else {
            if (k == 2) ans = -1;
            else ans = 2;
        }
    }

    cout << ans << endl;

    
    return 0;
}
