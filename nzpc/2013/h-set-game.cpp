#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int input;
    cin >> input;
    for (int i = 0; i < input; i++) {
        string c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        bool good = true;
        for (int j = 0; j < 4; j++) {
            if (c1[j] == c2[j] && c1[j] == c3[j]) {
                continue;
            } else if (c1[j] == c2[j] || c1[j] == c3[j] || c3[j] == c2[j]) {
                good = false;
            }
        }
        if (good) {
            cout << "Set\n";
        } else {
            cout << "Not a set\n";
        }
    }
}