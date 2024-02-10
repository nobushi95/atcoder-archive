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
    ll N;
    cin >> N;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    sort(ALL(a));

    map<ll, ll> tbl;
    FORE(ai, a) tbl[ai]++;

    deque<ll> q;
    FORE(t, tbl) {
        q.push_back(t.first);
        t.second--;
    }

    FORE(t, tbl) {
        if (t.second > 0) {
            REP(i, 0, t.second) q.push_back(t.first);
        }
    }

    ll ans = 0;
    ll cur = 1;
    while (q.size() > 0) {
        if (q.front() == cur) {
            q.pop_front();
            ans++;
            cur++;
        } else {
            if (q.size() < 2) break;
            q.pop_back();
            q.pop_back();
            q.push_front(cur);
        }
    }

    cout << ans << endl;

    return 0;
}
