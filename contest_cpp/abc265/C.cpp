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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> G(H);
    FORE(g, G) cin >> g;

    vector<vector<bool>> visited(H, vector<bool>(W, false));

    ll x = 0, y = 0;
    while (true) {
        auto cur = G[y][x];
        visited[y][x] = true;
        if ((cur == 'U' && y == 0) ||
            (cur == 'D' && y == H - 1) ||
            (cur == 'L' && x == 0) ||
            (cur == 'R' && x == W - 1)
            )
            break;
        
        if (cur == 'U') y -= 1;
        if (cur == 'D') y += 1;
        if (cur == 'L') x -= 1;
        if (cur == 'R') x += 1;

        if (visited[y][x]) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << y + 1 << " " << x + 1 << endl;
    
    return 0;
}
