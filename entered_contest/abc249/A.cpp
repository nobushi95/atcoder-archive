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
    ll A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    ll takahashi = 0;
    ll x = X;
    bool isTRun = true;
    while (x > 0) {
        if (isTRun) {
            ll time = x - A;
            if (time < 0) {
                takahashi += B * x;
                x = 0;
            } else {
                takahashi += B * A;
                x = time;
            }
            isTRun = false;
        } else {
            x -= C;
            isTRun = true;
        }
    }

    ll aoki = 0;
    x = X;
    bool isARun = true;
    while (x > 0) {
        if (isARun) {
            ll time = x - D;
            if (time < 0) {
                aoki += E * x;
                x = 0;
            } else {
                aoki += E * D;
                x = time;
            }
            isARun = false;
        } else {
            x -= F;
            isARun = true;
        }
    }

    if (aoki < takahashi) {
        cout << "Takahashi" << endl;
    } else if (aoki == takahashi) {
        cout << "Draw" << endl;
    } else {
        cout << "Aoki" << endl;
    }

    return 0;
}
