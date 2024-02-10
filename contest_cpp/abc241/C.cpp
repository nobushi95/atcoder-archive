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

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    FORE(s, S) cin >> s;

    REP(i, 0, N) {
        REP(j, 0, N - 5) {
            ll blackCount = 0;
            REP(k, 0, 6) {
                if (S[i][j + k] == '#') blackCount++;
            }
            if (blackCount >= 4) {
               cout << "Yes" << endl;
                return 0;
            }
        }
    }

    REP(i, 0, N) {
        REP(j, 0, N - 5) {
            ll blackCount = 0;
            REP(k, 0, 6) {
                if (S[j + k][i] == '#') blackCount++;
            }
            if (blackCount >= 4) {
                cout << "Yes" << endl;
               return 0;
            }
        }
    }

    REP(i, 0, N - 5) {
        REP(j, 0, N - 5) {
            ll blackCount = 0;
            REP(k, 0, 6) {
                if (S[i + k][j + k] == '#') blackCount++;
            }
            if (blackCount >= 4) {
                cout << "Yes" << endl;
               return 0;
            }
        }
    }

    REP(i, 0, N - 5) {
        REP(j, 5, N) {
            ll blackCount = 0;
            REP(k, 0, 6) {
                if (S[i + k][j - k] == '#') blackCount++;
            }
            if (blackCount >= 4) {
                cout << "Yes" << endl;
               return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
