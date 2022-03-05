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

bool isPrime(ll n) {
    if (n == 1) {
        return false;
    }

    REP(i, 2, n) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    REPEQ(i, A, B) {
        bool containSumPrime = false;
        REPEQ(j, C, D) {
            ll sum = i + j;
            if (isPrime(sum)) {
                containSumPrime = true;
                break;
            }
        }
        if (!containSumPrime) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }

    cout << "Aoki" << endl;

    return 0;
}
