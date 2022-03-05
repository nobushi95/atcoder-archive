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
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    vector<pair<ll, ll>> tbl;
    tbl.push_back({a[0], 1});
    ll count = 1;
    cout << count << endl;

    REP(i, 1, N) {
        count++;

        if (tbl.back().first == a[i]) {
            tbl.back().second++;
            if (tbl.back().second == tbl.back().first) {
                count -= tbl.back().first;
                tbl.pop_back();
            }
        } else {
            tbl.push_back({a[i], 1});
        }
        cout << count << endl;
    }


    return 0;
}
