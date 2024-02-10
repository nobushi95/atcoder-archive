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
    vector<ll> A(N), B(N);
    REP(i, 0, N) cin >> A[i] >> B[i];

    double totalTime = 0.0;
    REP(i, 0, N) totalTime += double(A[i]) / B[i];
    totalTime /= 2;

    double ans = 0.0;
    REP(i, 0, N) {
        ans += min(double(A[i]), totalTime * B[i]);
        totalTime -= min(double(A[i]) / B[i], totalTime);
    }

    cout << fixed << setprecision(10) << ans << endl;
    
    return 0;
}
