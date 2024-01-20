#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
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
#define     Fi_Amanillah                       return 0;
#define     Bismillahir_Rahmanir_Raheem      int main()



//......Let's Start ........................//
ll solve(ll ar[], ll n,ll h)
{
    ll ans=h;
    ll l=1;
    ll r=h;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll z=0;
        for(ll i=0;i<n;i++)
        {
            if(i==n-1)z+=mid;
            else{
                ll x=ar[i+1]-ar[i];
                if(x>=mid)z+=mid;
                else z+=x;
            }
        }
        if(z>=h)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}


Bismillahir_Rahmanir_Raheem{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,h;
        cin>>n>>h;
        ll ar[n+4];
        for(ll i=0;i<n;i++)cin>>ar[i];
        ll ans = solve(ar,n,h);
        cout<<ans<<endl;
    }
    
    Fi_Amanillah;
}