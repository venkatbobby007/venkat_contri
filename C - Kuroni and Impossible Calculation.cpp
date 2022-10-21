#pragma GCC optimize("Ofast")
//#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
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
const int N = 1e5+10;
const int inf = 2e18;
void Sun_god(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    map<int,int> m2;
    bool ok = true;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m2[v[i]]++;
        if(m2[v[i]]>=2){
            ok = false;
        }
    }   
    if(n>m){
        cout<<"0"<<"\n";
        return;
    }
    sort(all(v));
    if(!ok){
        cout<<"0"<<"\n";
        return;
    }
    int prd = 1;
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            int x = v[j] -v[i];
            prd = (((prd)%m)*x)%m;
        }
    }
    cout<<prd<<'\n';
}
signed main(){
  faster
  int t=1;
  //cin>>t;
  while(t--){
    Sun_god();
  }
  return 0;
}
