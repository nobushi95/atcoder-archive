#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> H(N);
    for (auto &h : H) cin >> h;

    for (int i = 0; i < N; i++) {
        ll now = H[i];
        ll next = H[i + 1];
    }

    int i = 0;
    while (i < N - 1) {
        int now = H.at(i);
        int next = H.at(i + 1);
        if (now < next) {
            i++;
        } else {
            break;
        }
    }

    cout << H[i] << endl;

    return 0;
}