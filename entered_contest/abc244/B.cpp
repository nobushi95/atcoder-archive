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

void susumu(ll &x, ll &y, ll dir) {
    if (dir == 0) {
        x++;
    } else if (dir == 1) {
        y--;
    } else if (dir == 2) {
        x--;
    } else if (dir == 3) {
        y++;
    }
}

int main() {
    ll N;
    cin >> N;
    string T;
    cin >> T;

    ll x = 0;
    ll y = 0;
    ll dir = 0;
    FORE(t, T) {
        if (t == 'S') {
            susumu(x, y, dir);
        } else if (t == 'R') {
            dir = (dir + 1) % 4;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
