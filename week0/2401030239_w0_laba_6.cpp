#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* A = new int[n];
    srand(time(0));

    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 100;
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;
    return 0;
}
