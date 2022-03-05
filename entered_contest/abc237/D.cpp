#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

using ll = long long;

#define REP(i, left, right) for (ll i = left; i < right; i++)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    deque<int> A = {N};
    RREP(i, S.size() - 1, 0) {
        if (S[i] == 'L') A.push_back(i);
        else A.push_front(i);
    }

    FORE(a, A) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}