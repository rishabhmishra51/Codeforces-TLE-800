#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
while (t--) {
  int n;
  cin >> n ;
 vector<int>arr(n);
  int f1=0,f2=0 ;
for(int i=0;i<n;i++){
     cin >> arr[i];
      if(arr[i] == -1){
          f1++;
      }
      else {
          f2++;
      }
  }
  // 1. sum >=0
  // 2. product =1
  if(f1<=f2){
     if(f1%2 !=0){
           cout <<1<<endl;
     }
     else{
          cout << 0 <<endl;
     }
  }
  else{
     int ops = f1 - (n/2); 
     if((n/2)%2 == 0){
         cout <<ops<<endl;
     }
     else{
           ops+=1;
           cout << ops <<endl;
     
     }
    
  }

    }
}
