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

vector <ll> v(1100);
void uff(){
 for(int i=1;i<1008;i+=4){
   v[i]=i+1;
   v[i+1]=i+3;
   v[i+2]=i;
   v[i+3]=i+2;
 }
}
void bobby(){
  ll n;cin>>n;
  if(n<4){cout<<-1<<"\n";return;}
  if(n%4==0){rep(i,1,n+1){cout<<v[i]<<" ";}}
  if(n%4==1){rep(i,1,n){cout<<v[i]<<" ";}cout<<n<<" ";}
  if(n%4==2){rep(i,1,n-2){cout<<v[i]<<" ";}cout<<n-1<<" "<<n-3<<" "<<n<<" ";}
  if(n%4==3){rep(i,1,n-3){cout<<v[i]<<" ";}cout<<n-2<<" "<<n<<" "<<n-4<<" "<<n-1;}
  cout<<"\n";
}
  signed main(){
  
   venkat_bobby
   ll t=1;
   cin>>t;
   uff();
   while(t--){
     bobby();
   }
 
return 0;
}
