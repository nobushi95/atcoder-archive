#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<ll> A(N), B(N);
    FORE(a, A) cin >> a;
    FORE(b, B) cin >> b;

    vector<ll> ans;

    vector<pair<ll, ll>> Ai(N);
    REP(i, 0, N) {
        Ai[i] = {A[i], i};
    }
    auto f = [](auto &left, auto &right) {if (left.first > right.first) return true; else if (left.first == right.first) return left.second <= right.second; else return false; };
    sort(ALL(Ai), f);
    REP(i, 0, X) ans.push_back(Ai[i].second);

    vector<pair<ll, ll>> Bi;
    REP(i, X, Ai.size()) {
        ll idx = Ai[i].second;
        Bi.push_back({B[idx], idx});
    }
    sort(ALL(Bi), f);
    REP(i, 0, Y) ans.push_back(Bi[i].second);

    vector<pair<ll, ll>> Ci;
    REP(i, Y, Bi.size()) {
        ll idx = Bi[i].second;
        Ci.push_back({A[idx] + B[idx], idx});
    }
    sort(ALL(Ci), f);
    REP(i, 0, Z) ans.push_back(Ci[i].second);

    sort(ALL(ans));
    FORE(a, ans) cout << a + 1 << endl;

    return 0;
}
