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



Bismillahir_Rahmanir_Raheem{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>ne,po;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)po.push_back(x);
            if(x<0)ne.push_back(-x);
        }
        ll ans=0;
 
        sort(po.begin(),po.end());
        sort(ne.begin(),ne.end());
        reverse(po.begin(),po.end());
        reverse(ne.begin(),ne.end());
 
        if(ne.size()==0)
        {
            if(po.size()!=0)
            {
                for(int i=0;i<po.size();i+=k)
                {
                    //cout<<po[i]<<endl;
                    ans+=po[i]*2;
                }
                ans-=po[0];
            }
            cout<<ans<<endl;
        }
        else if(po.size()==0)
        {
            if(ne.size()!=0)
            {
                for(int i=0;i<ne.size();i+=k)
                {
                    ans+=ne[i]*2;
                }
                ans-=ne[0];
            }
            cout<<ans<<endl;
        }
        else
        {
            for(int i=0;i<po.size();i+=k)ans+=po[i]*2;
            for(int i=0;i<ne.size();i+=k)ans+=ne[i]*2;
            if(po[0]>=ne[0])ans-=po[0];
            else ans-=ne[0];
            cout<<ans<<endl;
        }
    }
    
    Fi_Amanillah;
}