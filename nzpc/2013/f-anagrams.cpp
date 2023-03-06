#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cout << "Scenario " << i + 1 << '\n';
        int w;
        cin >> w;
        string words[w];
        string sortwords[w];
        for (int j = 0; j < w; j++) {
            cin >> words[j];
            sortwords[j] = words[j];
            sort(sortwords[j].begin(), sortwords[j].end());
        }
        int q;
        cin >> q;
        for (int j = 0; j < q; j++) {
            string word;
            bool good = false;
            cin >> word;
            string sword = word;
            sort(sword.begin(), sword.end());
            for (int k = 0; k < w; k++) {
                if (sortwords[k] == sword) {
                    cout << word << ' ' << words[k] << '\n';
                    good = true;
                    break;
                }
            }
            if (!good) {
                cout << word << " <none>" << '\n';
            }
        }
    }
}