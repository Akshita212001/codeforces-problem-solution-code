#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
void solve()
{
   vector<ll> v(3);
   for(int i=0;i<3;i++) cin>>v[i];
   sort(v.begin(),v.end());
   ll largest=v[2];
   if(largest==v[0]+v[1]){
    cout<<"YES"<<endl;
   }
   else if(v[0]==v[1] && v[2]%2==0){
       cout<<"YES"<<endl;
   }
   else if(v[1]==v[2] && v[0]%2==0){
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}
        
    