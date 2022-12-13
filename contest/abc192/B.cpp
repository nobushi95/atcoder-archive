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

    bool isUnReadable = true;
    REP(i, 0, S.length()) {
        if (i % 2 == 1) {
            if (!(S[i] >= 'A' && S[i] <= 'Z')) {
                isUnReadable = false;
                break;
            }
        } else {
            if (!(S[i] >= 'a' && S[i] <= 'z')) {
                isUnReadable = false;
                break;
            }
        }
    }

    if (isUnReadable) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
