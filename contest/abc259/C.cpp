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
    string S, T;
    cin >> S >> T;

    auto s = runLengthEncoding(S);
    auto t = runLengthEncoding(T);

    if (s.size() != t.size()) {
        cout << "No" << endl;
        return 0;
    }

    REP(i, 0, s.size()) {
        if (s[i].first != t[i].first) {
            cout << "No" << endl;
            return 0;
        }
        if (s[i].second > t[i].second) {
            cout << "No" << endl;
            return 0;
        }
        if ((s[i].second < t[i].second) && (s[i].second == 1)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
