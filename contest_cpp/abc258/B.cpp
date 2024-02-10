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

int main() {
    ll N;
    cin >> N;
    vector<string> a(N);
    REP(i, 0, N) cin >> a[i];
    vector<vector<ll>> A(N, vector<ll>(N, 0));
    REP(i, 0, N) REP(j, 0, N) A[i][j] = a[i][j] - '0';

    vector<pair<ll, ll>> dest = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
    ll ans = 0;
    REP(d, 0, 8) {
        auto dd = dest[d];
        REP(sy, 0, N) REP(sx, 0, N) {
            ll b = pow(10, N - 1);
            ll cur = A[sy][sx] * b;
            ll nx = sx, ny = sy;
            REP(i, 0, N - 1) {
                if (nx + dd.first < 0) nx = N - 1;
                else nx = (nx + dd.first) % N;
                if (ny + dd.second < 0) ny = N - 1;
                else ny = (ny + dd.second) % N;
                b /= 10;
                cur += A[ny][nx] * b;
            }
            chmax(ans, cur);
        }
    }

    cout << ans << endl;

    return 0;
}
