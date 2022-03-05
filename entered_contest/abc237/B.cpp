#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W));
    REP(j, 0, H) {
        REP(i, 0, W) {
            cin >> A[j][i];
        }
    }

    REP(j, 0, W) {
        REP(i, 0, H) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}