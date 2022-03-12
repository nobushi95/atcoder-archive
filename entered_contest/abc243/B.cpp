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
    ll N;
    cin >> N;
    vector<ll> A(N), B(N);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    ll cnt1 = 0;
    REP(i, 0, N) {
        if (A[i] == B[i]) cnt1++;
    }

    ll cnt2 = 0;
    REP(i, 0, N) {
        if (count(ALL(B), A[i]) == 1) cnt2++;
    }

    cnt2 -= cnt1;

    cout << cnt1 << endl;
    cout << cnt2 << endl;

    return 0;
}
