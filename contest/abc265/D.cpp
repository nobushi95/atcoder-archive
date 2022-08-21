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
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll N, P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<ll> acc(N, 0);
    acc[0] = A[0];
    REP(i, 1, N) acc[i] = acc[i - 1] + A[i];

    vector<pair<ll, ll>> candidate;
    ll sum = 0;
    ll right = 0;
    REP(left, 0, N) {
        while (right < N && sum + A[right] <= P + Q + R) {
            sum += A[right];
            right++;
        }

        if (sum == P + Q + R) candidate.push_back({left, right});

        if (right == left) right++;
        else sum -= A[left];
    }

    FORE(cc, candidate) {
        ll x = cc.first;
        ll w = cc.second;
        ll p = 0;
        bool existP = false;
        ll y = 0;
        REP(i, x, w) {
            if (!existP) {
                if (i > w - 2) break;
                p += A[i];
                if (p > P) break;
                if (p == P) {
                    existP = true;
                    y = i + 1;
                }
            } else {
                ll q = acc[i] - acc[y - 1];
                if (q == Q) {
                    ll z = i + 1;
                    ll r = acc[w - 1] - acc[z - 1];
                    if (r == R) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "No" << endl;
    
    return 0;
}
