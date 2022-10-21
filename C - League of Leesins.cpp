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
const ll N=1e5+10,mod=1e18+7;

void bobby(){
  ll n,st,run=0;
  cin>>n;
  vector <ll> v[N];
  map <ll,ll> m,m1;
  rep(i,0,n-2){
    ll x,y,z;cin>>x>>y>>z;
    if(n==3){cout<<x<<" "<<y<<" "<<z;return;}
    v[x].pb(y);v[x].pb(z);
    v[y].pb(x);v[y].pb(z);
    v[z].pb(x);v[z].pb(y);
    m[x]++;m[y]++;m[z]++;
  }

rep(i,1,n+1){
 if(m[i]==1){
   st=i;
   break;
 }
  }
  //cout<<m[st]<<"\n";
ll ans[n]={0};ans[0]=st;
if(m[v[st][0]]==2){ans[1]=v[st][0];ans[2]=v[st][1];}
else{ans[2]=v[st][0];ans[1]=v[st][1];}
run=3;
m1[ans[0]]++;m1[ans[1]]++;m1[ans[2]]++;
while(run<n){
  ll b=0;
  rep(i,0,v[ans[run-1]].size()){
  rep(j,0,v[ans[run-2]].size()){
    if(v[ans[run-1]][i]==v[ans[run-2]][j] && m1[v[ans[run-2]][j]]==0){
      ans[run]=v[ans[run-2]][j];
      m1[ans[run]]++;
      break;b++;
    }
  }
  if(b){break;}
}
run++;}
rep(i,0,n){cout<<ans[i]<<" ";}

}
  signed main(){
  
   venkat_bobby
   ll t=1;
   //cin>>t;
   while(t--){
     bobby();
   }
 
return 0;
}
