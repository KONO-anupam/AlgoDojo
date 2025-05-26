#include <bits/stdc++.h>
using namespace std;
//Brute force->using set to remove duplicates
//T.C=o(nlogn) S.C=o(n)
int bruteForce(int arr[], int n) {
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    int k = s.size();
    int j = 0;
    for (int x : s) {
        arr[j++] = x;
    }
    return k;
}
//Optimal->using two pointers 











int main() {
    int arr[] = {1, 1, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =bruteForce(arr, n);
    cout << "The array after removing duplicate elements is: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

