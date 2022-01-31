#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
void solve()
{
   ll n;cin>>n;
   unordered_map<ll,ll> mp;
   for(int i=0;i<n;i++) {
       ll x;cin>>x;
       mp[abs(x)]++;
   }
   ll ans=mp.size();
   for(auto x:mp){
       if(x.second>1 && x.first!=0) ans++;
   }
   cout<<ans<<endl;
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