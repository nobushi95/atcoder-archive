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
    ll N;
    cin >> N;
    vector<string> S(N);
    vector<ll> T(N);
    REP(i, 0, N) cin >> S[i] >> T[i];

    map<string, pair<ll, ll>> tbl;
    REP(i, 0, N) {
        if (tbl[S[i]].first > 0) continue;
        tbl[S[i]].first++;
        tbl[S[i]].second = T[i];
    }

    ll maxPoint = 0;
    FORE(t, tbl) {
        chmax(maxPoint, t.second.second);
    }

    set<string> tbl2;
    FORE(t, tbl) {
        if (t.second.second == maxPoint) tbl2.insert(t.first);
    }

    REP(i, 0, N) {
        if (tbl2.find(S[i]) != tbl2.end() && T[i] == maxPoint) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
