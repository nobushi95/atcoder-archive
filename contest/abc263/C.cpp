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
    ll N, M;
    cin >> N >> M;

    vector<ll> tbl;
    REP(i, 0, N) tbl.push_back(0);
    REP(i, 0, M - N) tbl.push_back(1);

    do {
        REP(i, 0, M) {
            ll count = 0;
            if (tbl[i] == 0) {
                cout << i + 1;
                count++;
                if (count < N) {
                    cout << " ";
                }
            }
            
        }
        cout << endl;
    } while (next_permutation(ALL(tbl)));

    return 0;
}
