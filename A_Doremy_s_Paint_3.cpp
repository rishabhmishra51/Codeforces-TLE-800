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
       for(int i=0;i<n;i++){
          cin >>arr[i];
       }
       unordered_map<int,int>mp;
       bool flag=true;
       for(int i=0;i<n;i++){
          mp[arr[i]]++;
          if(mp.size()>2){
               flag=false;
               break;
          } 
       }
      if(mp.size()==1){
          //
      }
      else if(mp.size()==2){
          int f1 = begin(mp) ->second;

          if(f1 != n/2 && f1!= (n+1)/2){
               flag = false;
          }
      }
      else{
          //
      }
     if(flag) cout <<"Yes"<<endl;
     else cout <<"No"<<endl;
    }
}
