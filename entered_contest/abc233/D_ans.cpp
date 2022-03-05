#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A.at(i);

    map<ll, ll> m;
    m[0] = 1; // lとrが同じ場合？
    ll ans = 0;
    ll acc = 0;
    for (const auto &a: A) {
        acc += a;
        ll l = acc - K;
        ans += m[l];
        m[acc]++;
    }

    cout << ans << endl;

    return 0;
}