#include <iostream>
using namespace std;

int main() {
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    while (i | j | k | l != 0) {
        int count = 0;
        while (i | j | k | l != 0) {
            int a, b, c, d;
            a = i - j;
            b = j - k;
            c = k - l;
            d = l - i;
            i = abs(a);
            j = abs(b);
            k = abs(c);
            l = abs(d);
            count++;
        }
        cout << count << '\n';
        cin >> i >> j >> k >> l;
    }
}