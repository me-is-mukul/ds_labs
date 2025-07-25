#include <iostream>
#include <unordered_map>
using namespace std;

int countSubarraysPositive(int arr[], int n, int k) {
    int start = 0, end = 0, sum = 0, count = 0;

    while (end < n) {
        sum += arr[end];

        while (sum > k && start <= end) {
            sum -= arr[start];
            start++;
        }

        if (sum == k) {
            count++;
        }

        end++;
    }

    return count;
}



int countSubarraysPositive(int arr[], int n, int k) {
    int start = 0, end = 0, sum = 0, count = 0;

    while (end < n) {
        sum += arr[end];

        while (sum > k && start <= end) {
            sum -= arr[start];
            start++;
        }

        if (sum == k) {
            count++;
        }

        end++;
    }

    return count;
}

