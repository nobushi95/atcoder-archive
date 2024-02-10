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

void dbg(vector<bool> v) {
    REPEQ(i, 1, v.size()) {
        if (v[i]) cout << i << " ";
    }
    cout << endl;
}

int main() {
    ll N, K, Q;
    cin >> N >> K >> Q;
    vector<ll> A(K), L(Q);
    FORE(a, A) cin >> a;
    FORE(l, L) cin >> l;

    vector<bool> field(N + 1, false);
    REP(i, 0, K) field[A[i]] = true;

    REP(i, 0, Q) {
        ll komaPlace;
        ll komaCount = 0;
        REPEQ(j, 1, N) {
            if (field[j]) komaCount++;
            if (komaCount == L[i]) {
                komaPlace = j;
                break;
            }
        }
        if (komaPlace == N) continue;
        if (field[komaPlace + 1]) continue;
        field[komaPlace] = false;
        field[komaPlace + 1] = true;
    }

    vector<ll> ans;
    REPEQ(i, 1, N) if (field[i]) ans.push_back(i);

    REP(i, 0, ans.size()) {
        cout << ans[i];
        if (i == ans.size() - 1) cout << endl;
        else cout << " ";
    }

    return 0;
}
