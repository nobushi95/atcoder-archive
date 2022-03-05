#include <bits/stdc++.h>
using namespace std;

void printVec(const vector<int> &v) {
    for (const auto &e : v) {
        cout << e << ", ";
    }
    cout << "\n";
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    sort(A.begin(), A.end());

    return 0;
}