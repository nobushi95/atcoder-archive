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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<ll> acc(N, 0);
    acc[0] = A[0];
    REP(i, 1, N) acc[i] = acc[i - 1] + A[i];

    REP(x, 0, N) {
        ll pp;
        if (x == 0) pp = P;
        else pp = acc[x - 1] + P;
        auto yitr = lower_bound(ALL(acc), pp);
        if (yitr == A.end() || *yitr != pp) continue;
        ll qq = pp + Q;
        auto zitr = lower_bound(ALL(acc), qq);
        if (zitr == A.end() || *zitr != qq) continue;
        ll rr = qq + R;
        auto witr = lower_bound(ALL(acc), rr);
        if (witr == A.end() || *witr != rr) continue;
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    
    return 0;
}
