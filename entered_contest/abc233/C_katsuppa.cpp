#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

typedef long long ll;

int main() {
    ll N, X;
    cin >> N >> X;

    int lprod = 1;
    vector<vector<ll>> a(N);
    for (long long i = 0; i < N; i++) {
        int L;
        cin >> L;
        for (int j = 0; j < L; j++) {
            int t;
            cin >> t;
            (a.at(i)).push_back(t);
        }
        lprod *= L;
    }

    int count = 0;
    for (int i = 0; i < lprod; i++) {
        int ind = i;
        int prod = 1;
        for (const auto &ai : a) {
            prod *= ai[ind % ai.size()];
            ind /= ai.size();
            if (prod > X)
                break;
        }
        if (prod == X) count++;
    }

    cout << count << endl;

    return 0;
}