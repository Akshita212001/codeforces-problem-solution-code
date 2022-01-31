#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
 void solve()
{
   string s,t;cin>>s>>t;
   sort(s.begin(),s.end());
   unordered_map<char,ll> cnt;
   ll n=s.size();
   for(int i=0;i<n;i++){
       cnt[s[i]]++;
   }
   if(t!="abc" || cnt['a']==0 || cnt['b']==0 || cnt['c']==0 ){
       cout<<s<<endl;return;
   }
  
   string ans="";
   ans+=string(cnt['a'],'a'); //while(cnt['a']--) ans+='a';
   ans+=string(cnt['c'],'c'); //while(cnt['b']--) ans+='b';
   ans+=string(cnt['b'],'b'); //while(cnt['c']--) ans+='c';
   for(char c='d';c<='z';c++){
       ans+=string(cnt[c],c);
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