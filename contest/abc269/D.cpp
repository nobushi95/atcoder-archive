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

bool isNeighbor(pair<ll, ll> p1, pair<ll, ll> p2) {
    if (((p1.first == p2.first - 1) && (p1.second == p2.second - 1)) ||
        ((p1.first == p2.first - 1) && (p1.second == p2.second)) ||
        ((p1.first == p2.first)     && (p1.second == p2.second - 1)) ||
        ((p1.first == p2.first)     && (p1.second == p2.second + 1)) ||
        ((p1.first == p2.first + 1) && (p1.second == p2.second)) ||
        ((p1.first == p2.first + 1) && (p1.second == p2.second + 1))) return true;

    return false;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> X(N), Y(N);
    REP(i, 0, N) cin >> X[i] >> Y[i];

    vector<vector<pair<ll, ll>>> tbl;
    REP(i, 0, N) {
        vector<ll> containedTblIdx;
        REP(j, 0, tbl.size()) {
            REP(k, 0, tbl[j].size()) {
                if (isNeighbor(tbl[j][k], {X[i], Y[i]})) {
                    containedTblIdx.push_back(j);
                    break;
                }
            }
        }
        if (containedTblIdx.size() == 0) {
            vector<pair<ll, ll>> cur;
            cur.push_back({X[i], Y[i]});
            tbl.push_back(cur);
        } else {
            tbl[containedTblIdx.front()].push_back({X[i], Y[i]});
            if (containedTblIdx.size() == 1) continue;
            REP(j, 1, containedTblIdx.size()) {
                FORE(g, tbl[containedTblIdx[j]]) {
                    tbl[containedTblIdx.front()].push_back(g);
                }
            }
            vector<vector<pair<ll, ll>>> afterErase;
            containedTblIdx.erase(containedTblIdx.begin());
            sort(ALL(containedTblIdx));
            REP(j, 0, tbl.size()) {
                if (binary_search(ALL(containedTblIdx), j)) continue;
                afterErase.push_back(move(tbl[j]));
            }
            tbl = move(afterErase);
        }
    }

    cout << tbl.size() << endl;

    return 0;
}
