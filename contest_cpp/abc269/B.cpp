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

int main() {
    vector<string> S(10);
    FORE(s, S) cin >> s;

    vector<ll> ii, jj;
    REP(i, 0, 10) {
        bool isContain = false;
        FORE(c, S[i]) if (c == '#') isContain = true;
        if (isContain) ii.push_back(i);
    }
    if (ii.size() == 0) {
        cout << "10 10" << endl;
        cout << "10 10" << endl;
        return 0;
    }

    ll C = 10;
    REP(i, 0, 10) {
        if (S[ii[0]][i] == '#') {
            C = i + 1;
            break;
        }
    }
    ll D = 10;
    REP(i, C - 1, 10) {
        if (S[ii[0]][i] == '.') {
            D = i;
            break;
        }
    }

    sort(ALL(ii));

    cout << (ii.front() + 1) << " " << (ii.back() + 1) << endl;
    cout << C << " " << D << endl;

    return 0;
}
