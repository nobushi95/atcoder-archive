#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    vector<int> x(Q);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    for (int i = 0; i < Q; i++) cin >> x.at(i);

    sort(A.begin(), A.end());

    for (const auto &x_j : x) {
        for (int i = 0; i < N; i++) {
            if (x_j <= A.at(i)) {
                cout << N - i << endl;
                break;
            }
        }
    }

    return 0;
}