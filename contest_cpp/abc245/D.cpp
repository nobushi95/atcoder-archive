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
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N + 1), C(N + M + 1);
    FORE(a, A) cin >> a;
    FORE(c, C) cin >> c;

    vector<ll> B(M + 1, 0);

    RREP(i, M, 0) {
        B[i] = C[i + N] / A[N];
        REP(j, 0, N) C[i + j] -= B[i] * A[j];
    }

    REP(i, 0, M) {
        cout << B[i] << " ";
    }
    cout << B.back() << endl;


    return 0;
}
