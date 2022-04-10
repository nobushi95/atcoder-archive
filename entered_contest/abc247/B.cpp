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
    vector<string> s(N), t(N);
    REP(i, 0, N) cin >> s[i]>> t[i];

    map<string, ll> fullname;
    REP(i, 0, N) {
        string name = s[i] + t[i];
        fullname[name]++;
    }
    FORE(fn, fullname) {
        if (fn.second >= 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    REP(i, 0, N) {
        bool isFirstSame = false;
        bool isSecondSame = false;
        REP(j, 0, N) {
            if (i == j) continue;
            if (s[i] == t[j]) {
                isFirstSame = true;
                break;
            }
        }
        REP(j, 0, N) {
            if (i == j) continue;
            if (s[i] == s[j]) {
                isFirstSame = true;
                break;
            }
        }
        REP(j, 0, N) {
            if (i == j) continue;
            if (t[i] == t[j]) {
                isSecondSame = true;
                break;
            }
        }
        REP(j, 0, N) {
            if (i == j) continue;
            if (t[i] == s[j]) {
                isSecondSame = true;
                break;
            }
        }
        if (isFirstSame && isSecondSame) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
