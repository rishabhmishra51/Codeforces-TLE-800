#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);  

     
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> ans;

       
        ans.push_back(v[0]);
        for (int i = 1; i < n; i++) {
           
            if (v[i - 1] <= v[i]) {
                ans.push_back(v[i]);
            }
          
            else {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }

        int c = ans.size();
        cout << c << endl;

       
     //    for (int i = 0; i < ans.size(); i++) {
     //        cout << ans[i] << " ";
     //    }
     for(auto x :ans){
          cout << x << " ";
     }
        cout << endl;  
    }

    return 0;
}
