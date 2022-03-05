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

vector<pair<ll, ll>> makePoints(ll x, ll y) {
    vector<pair<ll, ll>> points(8);
    points[0] = {x + 1, y + 2};
    points[1] = {x + 2, y + 1};
    points[2] = {x + 2, y - 1};
    points[3] = {x + 1, y - 2};
    points[4] = {x - 1, y - 2};
    points[5] = {x - 2, y - 1};
    points[6] = {x - 2, y + 1};
    points[7] = {x - 1, y - 2};
    return points;
}

int main() {
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<pair<ll, ll>> points1 = makePoints(x1, y1);
    vector<pair<ll, ll>> points2 = makePoints(x2, y2);

    FORE(p2, points2) {
        if (find(ALL(points1), p2) != points1.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
