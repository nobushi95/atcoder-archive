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
    string S;
    cin >> S;

    ll komoji = 0, omoji = 0;
    FORE(s, S) {
        if (islower(s)) komoji++;
        if (isupper(s)) omoji++;
    }

    if (komoji == 0 || omoji == 0) {
        cout << "No" << endl;
        return 0;
    }

    map<char, ll> tbl;
    FORE(s, S) {
        tbl[s]++;
    }

    FORE(t, tbl) {
        if (t.second > 1) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
