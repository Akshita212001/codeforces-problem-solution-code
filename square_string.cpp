#include<bits/stdc++.h>
using namespace std;

           
int main(){
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        string s;
        cin>>s;
        int n=s.size();
        if(n%2!=0){
            cout<<"NO"<<endl;
            
        }
        
        int j=n/2;
        int i=0;
        while(j<n){
            if(s[i]!=s[j]){
                cout<<"NO"<<endl;
                
            }
            i++;
            j++;
        }
             cout<<"YES"<<endl;
        
    }
    return 0;
}