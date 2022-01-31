#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int z=(n+1)/2;
        if(k>z)
        cout<<-1<<endl;
        else{
            char ch[n+1][n+1];
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++)
                ch[i][j]='.';

                
            }
            int x=1;
            while(k--){
                ch[x][x]='R';
                x+=2;

            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++)
                cout<<ch[i][j];
                cout<<endl;
            }
        }
    }
    return 0;
}