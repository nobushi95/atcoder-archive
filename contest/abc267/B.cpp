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
    string S;
    cin >> S;
    ll N = 10;

    if (S[0] == '1') {
        cout << "No" << endl;
        return 0;
    }

    vector<vector<ll>> lane(7);
    lane[0].push_back(7);
    lane[1].push_back(4);
    lane[2].push_back(8);
    lane[2].push_back(2);
    lane[3].push_back(5);
    lane[3].push_back(1);
    lane[4].push_back(9);
    lane[4].push_back(3);
    lane[5].push_back(6);
    lane[6].push_back(10);

    REP(i, 0, 7) REP(j, i + 2, 7) {
        bool isLeft = false, isRight = false;
        FORE(p, lane[i]) if (S[p - 1] == '1') isLeft = true;
        FORE(p, lane[j]) if (S[p - 1] == '1') isRight = true;
        if (!(isLeft && isRight)) continue;

        bool isAllDownExist = false;
        REP(k, i + 1, j) {
            bool isAllDownLane = true;
            FORE(p, lane[k]) if (S[p - 1] == '1') isAllDownLane = false;
            if (isAllDownLane) {
                isAllDownExist = true;
                break;
            }
        }
        if (!isAllDownExist) continue;

        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}
