/*
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.
*/

#include <iostream>
using namespace std;

int getSecondLargest(vector<int>& arr) {
    // code here
    int n = arr.size();

    int lg = INT_MIN, sLg = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > lg) {
            sLg = lg;
            lg = arr[i];
        } else if (arr[i] != lg && arr[i] > sLg) {
            sLg = arr[i];
        }
    }

    if (sLg == INT_MIN) {
        return -1;
    } else
        return sLg;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << "Second largest element: " << getSecondLargest(v) << '\n';
    return 0;
}