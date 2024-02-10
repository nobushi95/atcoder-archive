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

    set<char> o, x;
    REP(i, 0, 10) {
        if (S[i] == 'o') o.insert(i + '0');
        if (S[i] == 'x') x.insert(i + '0');
    }

    ll ans = 0;
    REP(candidate, 0, 10000) {
        ostringstream os;
        os << setfill('0') << setw(4) << candidate;
        auto cd = os.str();
        bool containedX = false;
        REP(i, 0, 4) {
            if (x.find(cd[i]) != x.end()) {
                containedX = true;
                break;
            }
        }
        if (containedX) continue;
        bool containedO = true;
        FORE(oo, o) {
            bool contained = false;
            REP(i, 0, 4) {
                if (cd[i] == oo) {
                    contained = true;
                    break;
                }
            }
            if (!contained) {
                containedO = false;
                break;
            }
        }
        if (!containedO) continue;
        ans++;
    }

    cout << ans << endl;
    
    return 0;
}
