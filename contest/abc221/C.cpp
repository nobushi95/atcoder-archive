#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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

int main() {
    ll N;
    cin >> N;

    string s = to_string(N);
    sort(ALL(s));

    ll ans = 0;
    do {
        REP(i, 0, s.length() - 1) {
            auto l = s.substr(0, i + 1);
            auto r = s.substr(i + 1, s.length() - 1 - i);
            if (l.front() == '0' or r.front() == '0') continue;
            ll cur = stol(l) * stol(r);
            chmax(ans, cur);
        }
    } while (next_permutation(ALL(s)));

    cout << ans << endl;

    return 0;
}
