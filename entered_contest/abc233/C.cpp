#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<vector<int>> a(N);
    for (int i = 0; i < N; i++) {
        int L;
        cin >> L;
        for (int j = 0; j < L; j++) {
            int t;
            cin >> t;
            (a.at(i)).push_back(t);
        }
    }

    int times = 1;
    for (int i = 0; i < N; i++) times *= (a.at(i)).size();
    
    int count = 0;
    for (int t = 0; t < times; t++) {
        int x = 1;

    }

    return 0;
}