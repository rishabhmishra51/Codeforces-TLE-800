#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >>n;
       int arr[n];
       int sum =0;
       for(int i=0;i<n-1;i++){
          cin >>arr[i];
          sum +=arr[i];
       }
       int num =0;
     if(sum > 0){
          num -= sum;
     }
     else{
          num -= sum;
     }
     cout <<num <<endl;
       
    }
}
