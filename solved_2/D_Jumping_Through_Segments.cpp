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
    
    int t;               cin>>t;
   while(t--){
      int n;            cin>>n;
 
      vector<pair<ll,ll>> a(n);            
      for(int i=0;i<n;i++){
         cin>>a[i].first>>a[i].second;
      }
 
      auto Possible=[&](ll k)->bool{
 
         if(k<a[0].first)return false;
 
         if(n==1)return true;
 
         ll currMn=a[0].first,currMx=min(a[0].second,k);
 
         for(int i=0;i<n;i++){
 
            if(i==n-1)return true;
 
            ll nxtL=a[i+1].first,nxtR=a[i+1].second;
 
            ll nxtMn=-1,nxtMx=-1;
 
            ll low=nxtL,high=nxtR;
            while(low<=high){
               ll mid=low+(high-low)/2LL;
 
               if(mid>currMx){
                  if(abs(currMx-mid)<=k){
                     nxtMn=mid;
                     high=mid-1ll;
                  }
                  else{
                     high=mid-1LL;
                  }
               }
               else if(mid<currMn){
                  if(abs(currMn-mid)<=k){
                     nxtMn=mid;
                     high=mid-1ll;
                  }
                  else{
                     low=mid+1LL;
                  }
               }
               else{
                  nxtMn=mid;
                  high=mid-1ll;
               }
            }
 
            if(nxtMn==-1)return false;
 
            low=nxtL,high=nxtR;
            while(low<=high){
               ll mid=low+(high-low)/2LL;
 
               if(mid>currMx){
                  if(abs(currMx-mid)<=k){
                     nxtMx=mid;
                     low=mid+1LL;
                  }
                  else{
                     high=mid-1ll;
                  }
               }
               else if(mid<currMn){
                  if(abs(currMn-mid)<=k){
                     nxtMx=mid;
                     low=mid+1LL;
                  }
                  else{
                     low=mid+1ll;
                  }
               }
               else{
                  nxtMx=mid;
                  low=mid+1ll;
               }
            }
 
            currMn=nxtMn;
            currMx=nxtMx;
 
 
         }
 
         return true;
 
      };
 
      ll ans,low=0,high=(ll)1e10;
      while(low<=high){
         ll mid=low+(high-low)/2LL;
 
         if(Possible(mid)){
            ans=mid;
            high=mid-1LL;
         }
         else{
            low=mid+1LL;
         }
      }
 
      cout<<ans<<endl;
   }
    
    Fi_Amanillah;
}