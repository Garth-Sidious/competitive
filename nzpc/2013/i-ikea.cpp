#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input;
    cin >> input;
    while (input != 0) {
        vector<int> adj[input];
        for (int a = 0; a < input; a++) {
            int count;
            cin >> count;
            for (int i = 0; i < count; i++) {
                int l;
                cin >> l;
                adj[i].push_back(l);
            }
        }
        // we have adj, now:
        // run through it, remove all w/ dependencies (can be done above)
        
        cin >> input;
    }
}