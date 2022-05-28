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
    ll N, A, B;
    cin >> N >> A >> B;

    ll allSum = N * (N + 1) / 2;

    ll aMultNum = N / A;
    ll aSum = A * (aMultNum * (aMultNum + 1) / 2);

    ll bMultNum = N / B;
    ll bSum = B * (bMultNum * (bMultNum + 1) / 2);

    ll abLcm = lcm(A, B);
    ll abLcmNum = N / abLcm;
    ll abLcmSum = abLcm * (abLcmNum * (abLcmNum + 1) / 2);

    ll ans = allSum - aSum - bSum + abLcmSum;

    cout << ans << endl;

    return 0;
}
