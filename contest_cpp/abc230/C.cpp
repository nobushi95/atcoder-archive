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
    ll N, A, B, P, Q, R, S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    vector<string> ans(Q - P + 1, string(S - R + 1, '.'));
    REPEQ(i, max(P - A, R - B), min(Q - A, S - B)) ans[A + i - P][B + i - R] = '#';
    REPEQ(i, max(P - A, B - S), min(Q - A, B - R)) ans[A + i - P][B - i - R] = '#';

    FORE(a, ans) cout << a << endl;

    return 0;
}
