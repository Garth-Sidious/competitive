#include <iostream>
#include <iomanip>
using namespace std;

int coins[10] = {10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

bool any_of(int input[10]) {
    for (int i = 0; i < 10; i++) {
        if (input[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int input[10];
    for (int i = 0; i < 10; i++) {
        cin >> input[i];
    }
    while (any_of(input)) {
        int count = 0;
        for (int i = 0; i < 10; i++) {
            count += coins[i] * input[i];
        }
        cout << '$' << count / 100 << '.'; 
        cout << setw(2) << setfill('0') << int(count % 100) << '\n';
        for (int i = 0; i < 10; i++) {
            cin >> input[i];
        }
    }
}