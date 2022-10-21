#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define int long long
#define I insert
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) v.begin(),v.end()
#define PI 3.1415926535
#define fi first
#define se second
#define mod  1000000007;
using namespace std;
const int N = 1e3+10;
const int inf = 2e18;
void Sun_god(){
    int n;
    cin>>n;
    int maxi = 0,cnt = 0;
    vector<int> v(n+1);
    for(int i =1;i<=n;i++){
        cin>>v[i];
        maxi = max(maxi,v[i]);
        if(maxi==i){
            cnt++;
        }
    }   
    cout<<cnt<< "\n";
}
signed main(){
  faster
  int t=1;
  cin>>t;
  while(t--){
    Sun_god();
  }
  return 0;
}
