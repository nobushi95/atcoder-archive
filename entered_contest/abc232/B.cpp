#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int dist(char first, char end) {
    int tmp = end - first;
    if (tmp >= 0) return tmp;
    else return tmp + 26;
}

int main() {
    string s, t;
    cin >> s >> t;

    int firstDist = dist(s[0], t[0]);
    for (long unsigned int i = 1; i < s.size(); i++) {
        int currentDist = dist(s[i], t[i]);
        if (firstDist != currentDist) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}