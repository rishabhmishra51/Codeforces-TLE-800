#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
while (t--) {
  int n;
  cin >> n ;
 vector<int>arr(n);
int zeros=0,maxi=0;
for(int i=0;i<n;i++){
     cin >> arr[i];
     if(arr[i]==0){ zeros++;

     maxi = max(zeros,maxi);
     }
     else{
          zeros=0;
     }
}

cout <<maxi<<endl;
    }
}
