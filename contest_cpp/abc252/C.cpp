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
    ll N;
    cin >> N;
    vector<string> S(N);
    FORE(s, S) cin >> s;

    ll ans = LLONG_MAX;
    for (char c = '0'; c <= '9'; c++) {
        vector<bool> stopped(N, false);
        ll stoppedNum = 0;
        ll t = 0;
        while (stoppedNum < N) {
            REP(i, 0, N) {
                if (stopped[i]) continue;
                ll num = t % 10;
                if (S[i][num] == c) {
                    stopped[i] = true;
                    stoppedNum++;
                    break;
                }
            }
            if (stoppedNum == N) break;
            t++;
        }
        chmin(ans, t);
    }

    cout << ans << endl;

    return 0;
}
