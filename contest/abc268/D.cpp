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

ll N, M;
set<string> T;

void dfs(vector<string> &daAns, const vector<string> &base, ll num) {
    if (num == 0) {
        string cur;
        FORE(c, base) cur += c;
        daAns.push_back(cur);
        return;
    }

    REP(i, 0, N * 2 - 1) {
        if (i % 2 == 1) {
            auto candiate = base;
            candiate[i].push_back('_');
            dfs(daAns, candiate, num - 1);
        }
    }
}

int main() {
    cin >> N >> M;
    vector<string> S(N);
    FORE(s, S) cin >> s;
    REP(i, 0, M) {
        string s;
        cin >> s;
        T.insert(s);
    }

    sort(ALL(S));

    do {
        vector<string> cur;
        ll length = 0;
        REP(i, 0, N * 2 - 1) {
            if (i % 2 == 0) {
                cur.push_back(S[i / 2]);
                length += S[i / 2].length();
            } else {
                cur.push_back("_");
                length += 1;
            }
        }

        vector<string> daAns;
        dfs(daAns, cur, 16 -length);
        
        REPEQ(i, 0, 16 - length) {
            vector<string> dfsAns;
            dfs(dfsAns, cur, i);
            FORE(da, dfsAns) {
                if (T.find(da) == T.end() && da.length() >= 3 && da.length() <= 16) {
                    cout << da << endl;
                    return 0;
                }
            }
        }
    } while (next_permutation(ALL(S)));

    cout << -1 << endl;

    return 0;
}
