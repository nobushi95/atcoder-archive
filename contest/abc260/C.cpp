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

ll N, X, Y;
vector<ll> R, B;

int main() {
    cin >> N >> X >> Y;
    R.resize(N + 1);
    B.resize(N + 1);
    R[N]++;

    while (N > 1) {
        R[N - 1] += R[N] * (1 + X);
        B[N - 1] += R[N] * X * Y;
        R[N - 1] += B[N];
        B[N - 1] += B[N] * Y;
        N--;
    }

    cout << B[1] << endl;

    return 0;
}
