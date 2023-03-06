#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    while (input) {
        int lit = 0;
        int num = 0;
        while (input) {
            num++;
            lit += input & -input & 1;
            input = input >> 1;
        }
        cout << num << ' ' << lit << '\n';
        cin >> input;
    }
}