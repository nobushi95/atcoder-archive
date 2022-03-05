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

int main() {
    ll A, B, C, X;
    cin >> A >> B >> C >> X;

    if (X <= A) {
        cout << fixed << setprecision(8) << 1.0 << endl;
        return 0;
    }

    if (X > B) {
        cout << fixed << setprecision(8) << 0.0 << endl;
        return 0;
    }

    double ans = double(C) / (B - A);
    cout << fixed << setprecision(8) << ans << endl;

    return 0;
}
