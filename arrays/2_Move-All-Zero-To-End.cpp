/*
You are given an array arr[] of non-negative integers. You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
*/

#include <iostream>
using namespace std;

void pushZerosToEnd(vector<int>& arr) {
    int j = 0;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    while (j < arr.size()) {
        arr[j++] = 0;
    }

    // Print arr
    for (int i : arr) {
        cout << i << " ";
    }

    cout << '\n';
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    pushZerosToEnd(v);

    return 0;
}