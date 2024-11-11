#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort array to easily check divisibility
        sort(arr.begin(), arr.end());

        // Check if all elements are the same
        if (arr[0] == arr[n-1]) {
            cout << "-1" << endl;
            continue;
        }

        // Arrays b and c to hold the split results
        vector<int> b, c;

        // Try to split such that no element in c divides any element in b
        b.push_back(arr[n-1]); // Place the largest element in b
        for (int i = 0; i < n-1; i++) {
            if (arr[i] % arr[n-1] != 0) {  // If element doesn't divide the largest element
                c.push_back(arr[i]);
            } else {
                b.push_back(arr[i]);  // Else, place it in b
            }
        }

        // Check if we have valid non-empty arrays for both b and c
        if (b.empty() || c.empty()) {
            cout << "-1" << endl;
        } else {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b) {
                cout << x << " ";
            }
            cout << endl;
            for (int x : c) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}
