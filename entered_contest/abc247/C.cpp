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

deque<ll> ans;

void solve(ll n) {
    if (n == 1) {
        ans.push_back(1);
        return;
    }

    solve(n - 1);
    deque<ll> cur = ans;
    ans.push_back(n);
    REP(i, 0, cur.size()) {
        ans.push_back(cur[i]);
    }
}

int main() {
    ll N;
    cin >> N;

    solve(N);

    FORE(a, ans) cout << a << " ";
    cout << endl;

    return 0;
}
