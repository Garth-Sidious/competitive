#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int term = 1;
    int input;
    cin >> input;
    while (input != 0) {
        int ids[input];
        int scores[input] = {};
        int count[input][4] = {};
        for (int i = 0; i < input; i++) {
            cin >> ids[i];
            cin.ignore(48, '\n');
        }
        int id;
        char test, pass;
        cin >> id >> test >> pass;
        while (id != 0) {
            int index = distance(ids, find(ids, ids + input, id));
            int tin;
            if (test == 'A') {
                tin = 0;
            }
            if (test == 'B') {
                tin = 1;
            }
            if (test == 'C') {
                tin = 2;
            }
            if (test == 'D') {
                tin = 3;
            }
            bool passed = pass == 'P';
            if (passed) {
                scores[index] += max(5 - count[index][tin] * 2, 1);
            } else {
                count[index][tin] += 1;
            }
            cin >> id >> test >> pass;
        }
        int as = 0;
        for (int score : scores) {
            if (score >= 16) {
                as++;
            }
        }
        cout << "Term " << term << " A grades " << as << '\n';
        term++;
        cin >> input;
    }
}