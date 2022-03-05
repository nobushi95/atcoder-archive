#include <iostream>
#include <string>
using namespace std;

int main() {
    int D;
    cin >> D;
    if (D % 100 == 0) {
        cout << D / 100 << endl;
    } else {
        cout << D / 100.0 << endl;
    }

    return 0;
}