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
    ll N, K;
    cin >> N >> K;
    vector<string> S(N);
    FORE(s, S) cin >> s;

    ll ans = 0;
    ll time = 0;
    while (time < pow(2, N)) {
        vector<string> ss;
        REP(i, 0, N) {
            if ((time >> i) & 0b1) ss.push_back(S[i]);
        }

        map<char, ll> tbl;
        FORE(ssi, ss) {
            FORE(c, ssi) tbl[c]++;
        }
        ll cur = 0;
        FORE(t, tbl) {
            if (t.second == K) cur++;
        }
        chmax(ans, cur);
        time++;
    }

    cout << ans << endl;

    return 0;
}
