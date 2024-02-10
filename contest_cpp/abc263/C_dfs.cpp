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

ll N, M;

void dfs(vector<ll> A) {
    if (A.size() == N) {
        REP(i, 0, A.size()) {
            cout << A[i];
            if (i == A.size() - 1) cout << endl;
            else cout << " ";
        }
    }

    ll start = A.size() == 0 ? 1 : A.back() + 1;
    REP(i, start, M + 1) {
        auto newA = A;
        newA.push_back(i);
        dfs(newA);
    }
}

int main() {
    cin >> N >> M;
    dfs(vector<ll>());
    return 0;
}
