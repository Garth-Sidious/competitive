#include <set>
#include <queue>
#include <string>
using namespace std;

int main() {
    int input;
    scanf("%d", &input);
    while (input != 0) {
        set<int> depends_on[input];
        vector<int> dependents[input];
        for (int a = 0; a < input; a++) {
            int count;
            scanf("%d", &count);
            for (int i = 0; i < count; i++) {
                int l;
                scanf("%d", &l);
                depends_on[l].insert(a);
                dependents[a].push_back(l);
            }
        }
        priority_queue<int> order;
        for (int i = 0; i < input; i++) {
            if (depends_on[i].empty()) {
                order.push(-i);
            }
        }
        for (int i = 0; i < input; i++) {
            int next = -order.top();
            order.pop();
            printf("%d ", next);
            for (int d : dependents[next]) {
                depends_on[d].erase(next);
                if (depends_on[d].empty()) {
                    order.push(-d);
                }
            }
        }
        printf("\n");
        scanf("%d", &input);
    }
}