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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> a(N);
    FORE(ai, a) cin >> ai;

    vector<vector<ll>> modk(K);
    REP(i, 0, N) modk[i % K].push_back(a[i]);

    REP(i, 0, K) sort(ALL(modk[i]), greater<ll>());

    vector<ll> ans;
    ans.push_back(modk[0].back());
    modk[0].pop_back();
    REP(i, 1, N) {
        ll n = modk[i % K].back();
        if (n < ans.back()) {
            cout << "No" << endl;
            return 0;
        }
        ans.push_back(n);
        modk[i % K].pop_back();
    }

    cout << "Yes" << endl;

    return 0;
}
