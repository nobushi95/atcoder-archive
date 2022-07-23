#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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

int main() {
    ll N;
    cin >> N;
    vector<string> A(N);
    FORE(a, A) cin >> a;

    REP(i, 0, N) REP(j, 0, N) {
        if (i == j) continue;
        char r1 = A[i][j], r2 = A[j][i];
        if ((r1 == 'W' && r2 != 'L') ||
            (r1 == 'L' && r2 != 'W') ||
            (r1 == 'D' && r2 != 'D')) {
                cout << "incorrect" << endl;
                return 0;
            }
    }

    cout << "correct" << endl;

    return 0;
}
