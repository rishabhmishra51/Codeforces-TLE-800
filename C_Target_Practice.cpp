#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--) {
      int board[10][10]={
          {1,1,1,1,1,1,1,1,1,1},
          {1,2,2,2,2,2,2,2,2,1},
          {1,2,3,3,3,3,3,3,2,1},
          {1,2,3,4,4,4,4,3,2,1},
          {1,2,3,4,5,5,4,3,2,1},
          {1,2,3,4,5,5,4,3,2,1},
          {1,2,3,4,4,4,4,3,2,1},
          {1,2,3,3,3,3,3,3,2,1},
          {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
      };
      int point=0;
      for(int i=0;i<10;i++){
          for(int j=0;j<10;j++){
               char ch;
               cin >>ch;
               if(ch != '.'){
                    point += board[i][j];
               }
          }
      }
      cout << point <<endl;
    }
}
