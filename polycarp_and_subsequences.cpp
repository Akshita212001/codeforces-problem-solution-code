#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t=1;
    cin>>t;
    while(t--){
        vector<int>a(7);
       for(int i=0;i<7;i++){
           cin>>a[i];
       }
           if(a[0]+a[1]==a[2]){
               cout<<a[0]<<" "<<a[1]<<" "<<a[3]<<endl;
           }
           else{
               cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
           }
       }
    
    
        
       
        
    return 0;
}
