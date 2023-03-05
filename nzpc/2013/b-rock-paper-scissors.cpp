#include <iostream>
#include <string>
using namespace std;

int main() {
    char tokens[5] = {'S', 'P', 'R', 'L', 'K'};
    int games;
    cin >> games;
    for (int g = 0; g < games; g++) {
        string n1, n2;
        cin >> n1 >> n2;
        int rounds;
        cin >> rounds;
        int win, loss, draw;
        win = loss = draw = 0;
        for (int r = 0; r < rounds; r++) {
            char c1, c2;
            cin >> c1 >> c2;
            int i1, i2;
            for (int i = 0; i < 5; i++) {
                if (c1 == tokens[i]) {
                    i1 = i;
                }
                if (c2 == tokens[i]) {
                    i2 = i;
                }
            }
            int result = (i1 + 5 - i2) % 5;
            if (result == 0) {
                draw++;
            }
            if (result == 1 || result == 3) {
                win++;
            }
            if (result == 2 || result == 4) {
                loss++;
            }
        }
        cout << n1 << " " << loss << " " << n2 << " " << win << " draws " << draw << '\n';
    }
}