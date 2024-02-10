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

    vector<vector<ll>> A(N);
    REP(i, 0, N) {
        A[i].resize(i + 1);
    }

    REP(i, 0, N) REP(j, 0, A[i].size()) {
        if (j == 0 || j == i) A[i][j] = 1;
        else A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
    }

    REP(i, 0, N) REP(j, 0, A[i].size()) {
        cout << A[i][j];
        if (j == A[i].size() - 1) cout << endl;
        else cout << " ";
    }

    return 0;
}
