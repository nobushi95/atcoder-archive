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
    int N;
    cin >> N;
    vector<int> A(N);
    FORE(a, A) cin >> a;

    vector<int> cut;
    int cur = 0;
    FORE(a, A) {
        cur += a;
        if (cur < 360) {
            cut.push_back(cur);
        } else {
            cur -= 360;
            cut.push_back(cur);
        }
    }

    sort(cut.begin(), cut.end());

    int ans = cut[0];
    REP(i, 0, cut.size() - 1) {
        int d = cut[i + 1] - cut[i];
        if (d > ans) ans = d;
    }
    int d = 360 - cut[cut.size() - 1];
    ans = d > ans ? d : ans;

    cout << ans << endl;

    return 0;
}