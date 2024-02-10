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
    ll N, Q;
    string S;
    cin >> N >> S >> Q;

    auto head = S.substr(0, N);
    auto tail = S.substr(N);

    REP(_, 0, Q) {
        ll T, A, B;
        cin >> T >> A >> B;
        A--;
        B--;

        if (T == 1) {
            if (B < N) swap(head[A], head[B]);
            else if (N <= A) swap(tail[A - N], tail[B - N]);
            else swap(head[A], tail[B - N]);
        } else swap(head, tail);
    }

    cout << head << tail << endl;

    return 0;
}
