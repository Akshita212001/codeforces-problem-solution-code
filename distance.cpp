#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 
ll power(ll a, ll b){ // a raised to power b
  ll res=1;
  while(b){
    if(b&1) res=(res*a)%mod;
    b>>=1;
    a=(a*a)%mod;
  }
  return res;
}
 
bool isprime(ll n){
  for(ll i=2;i*i<=n;i++){
   if(n%i==0) return 0;
  }
  return 1;
}
 
void solve()
{
   ll x,y;
   cin>>x>>y;
   ll d=x+y;
   if(d&1){
     cout<<-1<<" "<<-1<<endl;return;
   }
   ll a=x/2,b=y/2;

   if(x&1) { //here x and y both will be odd
     a++;
   }
   cout<<a<<" "<<b<<endl;
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