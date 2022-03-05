#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string sn;
    cin >> sn;
    ll N = stoll(sn);

    if (N < 10) {
        ll ans = 0;
        REPEQ(i, 1, N) {
            ans += i;
        }
        cout << ans << endl;
        return 0;
    }

    ll ans = 45;
    ll pow10 = sn.size() - 1;
    REP(i, 1, pow10) {
        ll base = ((ll)pow(10LL, i) * 9LL) % 998244353LL;
        ans += (base + 1) * base / 2;
        ans %= 998244353LL;
    }

    ll n = (N - (ll)pow(10LL, pow10) + 1LL) % 998244353LL;
    ans += n * (n + 1) / 2;
    ans %= 998244353LL;

    cout << ans << endl;

    return 0;
}