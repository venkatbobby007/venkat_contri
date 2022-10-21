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
const ll N=1e5+10,mod=1e9+7;

void bobby(){
  ll n,m,k,x,y;cin>>n>>m>>k;
  rep(i,0,2*k){cin>>x>>y;}
  cout<<n+m+n*m-2<<"\n";
  rep(i,0,m-1){cout<<"L";}
  rep(i,0,n-1){cout<<"U";}
  rep(i,0,n){
    rep(j,0,m-1){
      if(i%2==0){cout<<"R";}
      else{cout<<"L";}
    }
    cout<<"D";
  }
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
