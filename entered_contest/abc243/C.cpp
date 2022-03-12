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
    vector<ll> X(N), Y(N);
    REP(i, 0, N) cin >> X[i] >> Y[i];
    string S;
    cin >> S;

    map<ll, set<ll>> rTbl;
    map<ll, set<ll>> lTbl;
    REP(i, 0, N) {
        if (S[i] == 'R') rTbl[Y[i]].insert(X[i]);
        else if (S[i] == 'L') lTbl[Y[i]].insert(X[i]);
    }
    
    FORE(rt, rTbl) {
        ll rightY = rt.first;
        ll rightXMin = *(rt.second.begin());
        if (lTbl[rightY].size() == 0) continue;
        ll leftXMax = *(--lTbl[rightY].end());
        if (rightXMin < leftXMax) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
