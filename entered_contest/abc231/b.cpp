#include <iostream>
#include <string>

#include <vector>
#include <algorithm>
using namespace std;

void genCandidate(vector<pair<string, int> > &candidate, const string &name) {
    for (const pair<string, int> &c : candidate) {
        if (c.first != name) {
            candidate.push_back(make_pair(name, 0));
            break;
        }
    }
}

void countCandidate(vector<pair<string, int> > &candidate, const string &name) {
    for (pair<string, int> &c : candidate) {
        if (c.first == name) {
            c.second++;
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S.at(i);

    vector<pair<string, int> > candidate;
    candidate.push_back(make_pair(S[0], 0));
    for (int i = 1; i < N; i++) {
        genCandidate(candidate, S[i]);
    }
    
    for (int i = 0; i < N; i++) {
        countCandidate(candidate, S[i]);
    }

    auto big = [](const pair<string, int> &left, const pair<string, int> &right) { return left.second < right.second; };
    cout << max_element(candidate.begin(), candidate.end(), big)->first;

    return 0;
}