#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

      
        int anna = (c + 1) / 2;  
        int katie = c / 2;     
        
      
        a += anna;
        b += katie;

     
        if (a == b) {
            cout << "Second" << endl;
        } else if (a > b) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }

    return 0;
}
