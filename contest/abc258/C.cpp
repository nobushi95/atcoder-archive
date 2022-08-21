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

auto runLengthEncoding(const string &s) {
    vector<pair<char, ll>> res;

    ll N = s.length();
    char pre = s[0];
    ll count = 1;
    REP(i, 1, N) {
        if (pre != s[i]) {
            res.push_back({pre, count});
            count = 1;
            pre = s[i];
        } else {
            count++;
        }
    }
    res.push_back({pre, count});

    return res;
}

int main() {
    ll N, Q;
    string S;
    cin >> N >> Q >> S;

    auto ss = runLengthEncoding(S);
    deque<pair<char, ll>> q;
    FORE(si, ss) q.push_back(si);

    ll start = 0;
    REP(i, 0, Q) {
        ll t, x;
        cin >> t >> x;
        if (t == 1) {
            start += x;
            start %= N;
        } else if (t == 2) {
            x--;
            ll idx = x - start;
            if (idx < 0) idx += N;
            cout << S[idx] << endl;
        }
    }
    return 0;
}
