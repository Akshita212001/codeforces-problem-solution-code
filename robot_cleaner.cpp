#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

    long long  n,m,rb,cb,rd,cd;
     cin>>n>>m>>rb>>cb>>rd>>cd;
     long long ans=0;
     long long dr=1,dc=1;
     
     while(true){
         if(rb==rd || cb==cd)
         break;
         if(rb + dr > n || rb + dr < 1)
         dr *= -1;
         if(cb + dc > m || cb + dc < 1)
         dc *=-1;
         rb+=dr;
         cb+=dc;
         ans++;
     }
     cout<<ans<<endl;
     }
   return 0;
}
