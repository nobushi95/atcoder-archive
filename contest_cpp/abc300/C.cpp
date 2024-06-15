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

vector<pair<ll, ll>> d = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

int main() {
    ll H, W;
    cin >> H >> W;
    auto C = vector<string>(H);
    REP(i, 0, H) {
        cin >> C[i];
    }
    auto n = min(H, W);
    map<ll, ll> ans;

    REP(y, 0, H) REP(x, 0, W) {
        if (C[y][x] != '#') continue;

        REPEQ(k, 1, n + 1) {
            auto is_cross = true;
            REP(l, 0, 4) {
                auto nx = d[l].first * k + x;
                auto ny = d[l].second * k + y;
                if (nx < 0 || nx >= W || ny < 0 || ny >= H || C[ny][nx] != '#') {
                    is_cross = false;
                    break;
                }
            }
            if (!is_cross) {
                ans[k - 1]++;
                break;
            }
        }
    }

    REPEQ(i, 1, n) {
        if (i == n) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
    return 0;
}
