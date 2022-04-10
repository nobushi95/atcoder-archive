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
    ll Q;
    cin >> Q;
    deque<pair<ll, ll>> t;
    REP(i, 0, Q) {
        ll cmd;
        cin >> cmd;
        if (cmd == 1) {
            ll x, c;
            cin >> x >> c;
            if (t.size() == 0) {
                t.push_back({x, c});
                continue;
            }
            if (t.back().first == x) {
                t.back().second += c;
            } else {
                t.push_back({x, c});
            }
        } else if (cmd == 2) {
            ll c;
            cin >> c;
            ll ans = 0;
            if (t.front().second >= c) {
                ans += t.front().first * c;
                t.front().second -= c;
            } else {
                ll i = 0;
                while (i < c) {
                    ll cur = i;
                    i += t.front().second;
                    ans += t.front().first * t.front().second;
                    if (i > c) {
                        ans -= t.front().first * (i - c);
                        t.front().second -= c - cur;
                        break;
                    } else if (i == c) {
                        t.pop_front();
                    } else {
                        t.pop_front();
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
