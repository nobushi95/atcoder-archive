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
    string X;
    ll N;
    cin >> X >> N;
    vector<string> S(N);
    FORE(s, S) cin >> s;

    map<char, ll> tbl;
    REP(i, 0, X.length()) tbl[X[i]] = i;

    auto comp = [&tbl](string &l, string &r) {
        ll size = min(l.length(), r.length());
        REP(i, 0, size) {
            if (l[i] == r[i]) continue;
            return tbl[l[i]] < tbl[r[i]];
        }
        return l.length() < r.length();
    };

    sort(ALL(S), comp);

    FORE(s, S) cout << s << endl;

    return 0;
}
