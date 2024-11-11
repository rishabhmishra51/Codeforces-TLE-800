#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;
    int arr[n];
//     bool has_zero = false;
//     int min_operation = LLONG_MAX;  // Initialize to max long long to find the minimum value

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         if (arr[i] == 0) {
//             has_zero = true;
//         }
//         min_operation = min(min_operation, abs(arr[i]));
//     }

//     if (has_zero) {
//         cout << 0 << endl;
//     } else {
//         cout << min_operation << endl;
//     }

//     return 0;




for(int i=0;i<n;i++){
     cin >> arr[i];
}
 int ops = 1e9;
 for(int i=0;i<n;i++){
     ops = min(ops,abs(arr[i]-0));
 }
 cout << ops<<endl;
}
