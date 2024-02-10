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
    ll Q;
    cin >> Q;
    multiset<ll> A;
    vector<ll> ans;
    REP(i, 0, Q) {
        ll c;
        cin >> c;
        ll x;
        ll k;
        if (c == 1) {
            cin >> x;
            A.insert(x);
        } else if (c == 2) {
            cin >> x >> k;            
            decltype(A)::iterator itr = A.upper_bound(x);
            bool isOver = false;
            REP(i, 0, k) {
                if (itr == A.begin()) {
                    isOver = true;
                    break;
                }
                itr--;
            }
            if (isOver) {
                ans.push_back(-1);
            } else {
                ans.push_back(*itr);
            }
        } else if (c == 3) {
            cin >> x >> k;
            decltype(A)::iterator itr = A.lower_bound(x);
            REP(i, 0, k - 1) {
                itr++;
            }
            if (itr == A.end()) {
                ans.push_back(-1);
            } else {
                ans.push_back(*itr);
            }
        }
    }

    FORE(a, ans) {
        cout << a << endl;
    }

    return 0;
}
