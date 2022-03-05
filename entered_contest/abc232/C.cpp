#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M), C(M), D(M);
    for (int i = 0; i < M; i++) cin >> A[i] >> B[i];
    for (int i = 0; i < M; i++) cin >> C[i] >> D[i];

    vector<int> P(N);
    for (int i = 0; i < N; i++) P.at(i) = i;
    iota(P.begin(), P.end(), 0);

    do {
        bool ok = true;
        for (int ai = 0; ai < M; ai++) {
            for (int ci = 0; ci < M; ci++) {
                if (!((C[P[ci]] == A[ai]) && (D[P[ci]] == B[ai]))) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(P.begin(), P.end()));
    cout << "Yes" << endl;
    return 0;
}