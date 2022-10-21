#pragma GCC optimize("Ofast")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI 3.1415926535 
#define mode 1000000007
#define mp make_pair
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define fi first
#define se second
#define all(x) x.begin(), x.end()
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
const ll N=2e5+10,mod=1e18+7;
 
void bobby(){
  ll n,sum=0,c=0;cin>>n;
  vector <ll> v(n);

  rep(i,0,n){cin>>v[i];if(i>0 && i<n-1 && v[i]>1){c++;}}
  if(n==3 && v[1]%2==1){cout<<-1<<"\n";return;}
  if(c==0){cout<<-1<<"\n";return;}
  rep(i,1,n-1){
  sum+=(v[i]+1)/2;
  }
  
  cout<<sum<<"\n";
  
}
  signed main(){
  
   venkat_bobby
   ll t=1;
   cin>>t;
   while(t--){
     bobby();
   }
 
return 0;
}
