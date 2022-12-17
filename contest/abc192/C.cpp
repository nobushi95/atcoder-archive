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

ll g1(ll x) {
    auto t = to_string(x);
    sort(ALL(t), greater());
    return stoll(t);
}

ll g2(ll x) {
    auto t = to_string(x);
    sort(ALL(t));
    return stoll(t);
}

ll f(ll x) {
    return g1(x) - g2(x);
}

int main() {
    ll N, K;
    cin >> N >> K;
    REP(i, 0, K) N = f(N);

    cout << N << endl;

    return 0;
}
