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
  ll n;cin>>n;
  ll a[n+1]={0},run=0;
  set <pair<ll,ll>> s;
  s.insert({-n,1});
  while(run<n){
    auto it=s.begin();
    ll x=-(*it).fi,y=(*it).se;
    ll z=y+x-1;
    ll b=(y+z)/2;
    run++;
    a[b]=run;
    //cout<<b<<"\n";
    //cout<<x<<" "<<y<<"\n";
    s.erase(it);
    ll y1=b-z,x1=-b+y;
    s.insert({y1,b+1});
    s.insert({x1,y});
  }
  
  rep(i,1,n+1){cout<<a[i]<<" ";}
  cout<<"\n";

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
