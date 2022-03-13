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
    ll N, X;
    cin >> N >> X;
    string S;
    cin >> S;

    string cur = bitset<64>(X).to_string();

    FORE(s, S) {
        if (s == 'U') {
            cur.pop_back();
        } else if (s == 'R') {
            cur.push_back('1');
        }
        else if (s == 'L') {
            cur.push_back('0');
        }
    }

    if (cur.size() > 64) {
        cur = cur.substr(cur.size() - 64);
    }

    unsigned long long ans = bitset<64>(cur).to_ullong();
    cout << ans << endl;

    return 0;
}
