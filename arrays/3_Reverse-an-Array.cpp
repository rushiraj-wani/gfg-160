/*
You are given an array of integers arr[]. You have to reverse the given array.

Note: Modify the array in place.
*/

#include <iostream>
using namespace std;

void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(vector<int>& v) {
    int n = v.size();
    int s = 0, e = n - 1;

    while (s < e) {
        mySwap(v[s], v[e]);
        s++;
        e--;
    }

    // Print
    for (int i : v) {
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

    reverseArray(v);

    return 0;
}