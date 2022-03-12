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
    ll V, A, B, C;
    cin >> V >> A >> B >> C;

    vector<ll> u = {A, B, C};

    ll v = V;
    ll i = 0;
    while (true) {
        v -= u[i % 3];
        if (v < 0) break;
        i++;
    }

    ll amari = i % 3;
    string ans;
    if (amari == 0) ans = "F";
    else if (amari == 1) ans = "M";
    else if (amari == 2) ans = "T";

    cout << ans << endl;

    return 0;
}
