#include <iostream>
#include <algorithm>
using namespace std;

void insertion(int arr[], int n) {
    // base case
    if (n == 0 || n == 1) {
        return;
    }

    // sort the subarray
    insertion(arr, n - 1);

    // insert the last element at its correct position
    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion(arr, n);

    // print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

