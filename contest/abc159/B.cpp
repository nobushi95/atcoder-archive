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
    ll N = S.length();

    auto S1 = S;
    reverse(ALL(S1));
    if (S != S1) {
        cout << "No" << endl;
        return 0;
    }

    auto S2 = S.substr(0, (N - 1) / 2);
    auto S3 = S2;
    reverse(ALL(S2));
    if (S2 != S3) {
        cout << "No" << endl;
        return 0;
    }

    auto S4 = S.substr((N + 3) / 2 - 1);
    auto S5 = S4;
    reverse(ALL(S5));
    if (S4 != S5) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
