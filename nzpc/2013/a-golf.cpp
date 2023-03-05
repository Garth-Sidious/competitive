#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;
    while (input != 0) {
        int min = 1000000000;
        for (int i = 0; i < input; i++) {
            int check;
            cin >> check;
            if (min > check) {
                min = check;
            }
        }
        cout << min << '\n';
        cin >> input;
    }
}