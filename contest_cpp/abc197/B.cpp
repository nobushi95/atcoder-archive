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
    ll H, W, X, Y;
    cin >> H >> W >> X >> Y;
    X--;
    Y--;
    vector<string> S(H);
    FORE(s, S) cin >> s;

    ll ans = 1;
    REP(y, Y + 1, W) {
        if (S[X][y] == '#') break;
        ans++;
    }
    RREP(y, Y - 1, 0) {
        if (S[X][y] == '#') break;
        ans++;
    }
    REP(x, X + 1, H) {
        if (S[x][Y] == '#') break;
        ans++;
    }
    RREP(x, X - 1, 0) {
        if (S[x][Y] == '#') break;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
