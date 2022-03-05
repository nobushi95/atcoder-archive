#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    vector<long long> A(N);
    for (long long i = 0; i < N; i++) cin >> A.at(i);

    int count = 0;
    for (long long l = 0; l < N; l++) {
        for (long long r = l; r < N; r++) {
            long long k = accumulate(A.begin() + l, A.begin() + r + 1, 0);
            if (k == K) count++;
        }
    }

    cout << count << endl;

    return 0;
}