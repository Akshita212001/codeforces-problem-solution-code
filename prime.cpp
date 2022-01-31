#include<bits/stdc++.h>
using namespace std;


    int n,m,h=0;
    
    int mas[16]={
        2,3,5,7,11,13,17,19,23,29,31,37,41,43,47
    };
    int main(){
        cin>>n>>m;
        for(int i=0;i<15;i++){
            if(n==mas[i] && m==mas[i+1])
            h++;
    }
    if(h==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES";
    }
    return 0;
}