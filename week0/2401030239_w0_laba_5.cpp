#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> socks(2*n);
    for (int i = 0; i < 2*n; i++) {
        cin >> socks[i];
    }

    vector<bool> onTable(n+1, false);
    int currentCount = 0;
    int maxCount = 0;

    for (int i = 0; i < 2*n; i++) {
        int sock = socks[i];
        if (!onTable[sock]) {
            onTable[sock] = true;
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            onTable[sock] = false;
            currentCount--;
        }
    }
    cout << maxCount << endl;

    return 0;
}
