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

const ll MAXP = 1000000 + 100;

vector<ll> createPrimeList() {
    vector<ll> primeList;
    vector<bool> isNotPrime(MAXP, false);
    REP(i, 2, MAXP) {
        if (isNotPrime[i]) continue;
        primeList.push_back(i);
        for (ll j = i; j < MAXP; j += i) isNotPrime[j] = true;
    }
    return primeList;
}

ll k(ll p, ll q) {
    double est = 1;
    est = (q * q * q);
    est *= p;
    if (est > 4e18) {
        return 4e18; 
    }
    return p * q * q * q;
}

int main() {
    ll N;
    cin >> N;

    auto primeList = createPrimeList();

    ll ans = 0;
    REP(pIdx, 0, primeList.size()) {
        ll qIdx = primeList.size() - 1;
        while (pIdx < qIdx && k(primeList[pIdx], primeList[qIdx]) > N) qIdx--;
        if (pIdx >= qIdx) break;
        ans += qIdx - pIdx;
    }

    cout << ans << endl;

    return 0;
}
