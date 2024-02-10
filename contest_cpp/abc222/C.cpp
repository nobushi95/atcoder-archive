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
    ll N, M;
    cin >> N >> M;
    vector<string> A(2 * N);
    REP(i, 0, 2 * N) cin >> A[i];

    function<bool (pair<ll, ll>, pair<ll, ll>)> comp = [](auto left, auto right) {
        if (left.first > right.first) {
            return true;
        } else if (left.first == right.first) {
            return left.second < right.second;
        } else {
            return false;
        }
    };
    set<pair<ll, ll>, function<bool (pair<ll, ll>, pair<ll, ll>)>> ans(comp);
    REP(i, 0, 2 * N) ans.insert({0, i});
    
    REP(i, 0, M) {
        auto cur = ans;
        REP(j, 0, N) {
            auto itr1 = cur.begin();
            auto itr2 = cur.begin();
            REP(k, 0, 2 * j) itr1++;
            REP(k, 0, 2 * j + 1) itr2++;
            char h1 = A[itr1->second][i];
            char h2 = A[itr2->second][i];
            if (h1 == h2) continue;
            if ((h1 == 'G' and h2 == 'C') or
                (h1 == 'C' and h2 == 'P') or
                (h1 == 'P' and h2 == 'G')) {
                auto result = *itr1;
                ans.erase(result);
                result.first++;
                ans.insert(result);
            } else {
                auto result = *itr2;
                ans.erase(result);
                result.first++;
                ans.insert(result);
            }
        }
    }

    for (auto [_, idx] : ans) cout << idx + 1 << endl;

    return 0;
}
