#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long 
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//



int main(){
    
    ll t;
    cin>>t;

    while (t--)
    {
        /* code */
      ll n,x;
      cin>>n>>x;
      ll a[n+1];
      a[0]=0;

      for(ll i =1; i<n; i++)
      {
        cin>>a[i];
      }  
      ll maxx=0;
      bool fa=0;
      for(ll i=0; i<n; i++)
      {
        maxx=max(maxx,a[i+1]-a[i]);
        fa=1;
      }
      if(fa)
      {
       ll maxx2=((x-a[n])*2);
        maxx=max(maxx,maxx2);
      }
      cout<<maxx<<endl;
    }
    
    
    return 0;
}