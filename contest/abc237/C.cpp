#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    string S;
    cin >> S;

    bool revert = true;
    REP(i, 0, S.size() / 2 + 1) {
        if (S[i] != S[S.size() - 1 - i]) {
            revert = false;
            break;
        }
    }

    if (revert) {
        cout << "Yes" << endl;
        return 0;
    }

    if (S[S.size() - 1] != 'a') {
        cout << "No" << endl;
        return 0;
    }

    int count = 0;
    RREP(i, S.size() - 1, 0) {
        if (S[i] == 'a') {
            count++;
        } else {
            break;
        }
    }

    int exist = 0;
    REP(i, 0, S.size()) {
        if (S[i] == 'a') exist++;
        else break;
    }

    if (exist > count) {
        cout << "No" << endl;
        return 0;
    }

    REP(i, 0, (S.size() - (count - exist)) / 2 + 1) {
        if (S[i] != S[S.size() - 1 - i - (count - exist)]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}