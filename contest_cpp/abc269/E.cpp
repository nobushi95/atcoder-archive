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

ll question(ll A, ll B, ll C, ll D) {
    cout << "? " << A << " " << B << " " << C << " " << D << endl;
    ll ans;
    cin >> ans;
    return ans;
}

int main() {
    ll N;
    cin >> N;
    ll U = 1, D = N + 1;
    while (U + 1 != D) {
        ll mid = (U + D) / 2;
        ll ans = question(U, mid - 1, 1, N);
        if (ans == mid - U) U = mid;
        else D = mid;
    }

    ll L = 1, R = N + 1;
    while (L + 1 != R) {
        ll mid = (L + R) / 2;
        ll ans = question(1, N, L, mid - 1);
        if (ans == mid - L) L = mid;
        else R = mid;
    }

    cout << "! " << U << " " << L << endl;

    return 0;
}
