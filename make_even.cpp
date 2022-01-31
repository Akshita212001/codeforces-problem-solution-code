#include<bits/stdc++.h>
#define ll long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int last=s.back()-'0';
        if(last%2==0){
            cout<<0<<endl;
            continue;
        }
        int first=s[0]-'0';
          if(first%2==0){
            cout<<1<<endl;
            continue;
        }
        bool possible=false;
        for(auto x:s){
            int num=x-'0';
            if(num%2==0)
            possible=true;
        }
        if(possible)
        cout<<2<<endl;
        else
        cout<<-1<<endl;

    }
    return 0;
}