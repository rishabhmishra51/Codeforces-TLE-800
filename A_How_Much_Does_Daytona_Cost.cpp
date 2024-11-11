#include<bits/stdc++.h>
using namespace std;
void solve(){
     
}
int main(){
     int t;
     cin >>t;
     while(t--){
          int n,k;
          cin >>n>>k;
          int arr[n];
          int c=0;
          for(int i=0;i<n;i++){
               cin >>arr[i];
               if(arr[i]==k){
                    c++;
                   
               }

          }
          if(c>=1) cout <<"YES"<<endl;
          else cout<<"NO"<<endl;
          
     }
}