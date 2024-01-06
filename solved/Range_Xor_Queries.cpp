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
const int mx = 2e5+123;
int a[mx];
ll preSum[mx];

Bismillahir_Rahmanir_Raheem{
    
    
    int n,q;
    cin>>n>>q;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int  i=1; i<=n; i++)
    {
    preSum[i]=preSum[i-1]^a[i];
    }
    while (q--)
    {
        /* code */
        int l,r;
        cin>>l>>r;

        cout<<(preSum[r]^preSum[l-1])<<endl;
    }
    
    Fi_Amanillah;
}