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

ll sign (pair<ll, ll> p1, pair<ll, ll> p2, pair<ll, ll> p3) {
    return (p1.first - p3.first) * (p2.second - p3.second) - (p2.first - p3.first) * (p1.second - p3.second);
}
 
bool within(pair<ll, ll> pt, pair<ll, ll> v1, pair<ll, ll> v2, pair<ll, ll> v3){
    bool b1 = sign(pt, v1, v2) < 0;
    bool b2 = sign(pt, v2, v3) < 0;
    bool b3 = sign(pt, v3, v1) < 0;

    return ((b1 == b2) && (b2 == b3));
}

int main() {
    vector<pair<ll, ll>> P(4);
    REP(i, 0, 4) cin >> P[i].first >> P[i].second;

    if (within(P[0], P[1], P[2], P[3]) ||
        within(P[1], P[0], P[2], P[3]) ||
        within(P[2], P[0], P[1], P[3]) ||
        within(P[3], P[0], P[1], P[2])) {
            cout << "No" << endl;
            return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
