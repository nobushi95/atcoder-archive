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
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    map<ll, ll> pasta;
    REP(i, 0, N) {
        pasta[A[i]]++;
    }

    REP(i, 0, M) {
        if (pasta[B[i]] <= 0) {
            cout << "No" << endl;
            return 0;
        } else {
            pasta[B[i]]--;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
