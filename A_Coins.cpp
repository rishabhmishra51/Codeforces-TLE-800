#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
while (t--) {
  int n,k;
  cin >>n>>k;
  if(n%2==0){
     cout << "YES"<<endl;
  }
  else{
     int p = n-k ;
     if(p%2==0){
            cout << "YES"<<endl;
     }
      else {
          cout << "NO"<<endl;
      }
  }
  
    }
}
