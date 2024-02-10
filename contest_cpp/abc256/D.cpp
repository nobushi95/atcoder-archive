#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N;
    cin >> N;
    vector<ll> L(N), R(N);
    REP(i, 0, N) cin >> L[i] >> R[i];

    vector<pair<ll, ll>> kukan(N);
    REP(i, 0, N) {
        kukan[i].first = L[i];
        kukan[i].second = R[i];
    }
    sort(ALL(kukan));

    vector<pair<ll, ll>> ans;
    ans.push_back(kukan[0]);
    REP(i, 1, N) {
        if (ans.back().second >= kukan[i].first) {
            if (ans.back().second < kukan[i].second) ans.back().second = kukan[i].second;
        } else {
            ans.push_back(kukan[i]);
        }
    }

    FORE(aa, ans) {
        cout << aa.first << " " << aa.second << endl;
    }

    return 0;
}
