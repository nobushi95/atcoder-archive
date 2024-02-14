#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, K, X;
    cin >> N >> K >> X;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    ll ans = 0;
    FORE(a, A) ans += a;

    ll use = 0;
    FORE(a, A) use += a / X;
    use = min(use, K);
    ans -= X * use;
    K -= use;

    FORE(a, A) a %= X;
    sort(ALL(A), greater<ll>());
    FORE(a, A) {
        if (K == 0) break;
        ans -= a;
        K--;
    }

    cout << ans << endl;
    
    return 0;
}