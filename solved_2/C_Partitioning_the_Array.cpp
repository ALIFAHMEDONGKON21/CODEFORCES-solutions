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
    
     int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
      vector<int> a(n);
 
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
 
      if(n==1){
         cout<<1<<endl;
         continue;
      }
 
      vector<int> divs;
      for(ll i=1;i*i<=n;i++){
         if(n%i==0){
            divs.push_back(i);
            if(i*i!=n){
               divs.push_back(n/i);
            }
         }
      }
 
 
      int ans=0;
      for(auto k:divs){
         int jump=k;
         bool isUnique=true;
         for(int i=0;i<k;i++){
            int last=-1;
            for(int j=i;j<n;j+=jump){
               if(last==-1){
                  last=a[j];
               }
               else{
                  if(last!=a[j]){
                     isUnique=false;
                  }
               }
            }
         }
 
         if(isUnique){
            ans++;
            continue;
         }
 
 
         int GCD=0;
         for(int i=0;i<k;i++){
            int last=-1;
            for(int j=i;j<n;j+=jump){
               if(last==-1){
                  last=a[j];
               }
               else{
                  GCD=__gcd(GCD,abs(last-a[j]));
                  last=a[j];
               }
            }
         }
 
         if(GCD>1){
            ans++;
            continue;
         }
      }
 
 
 
      cout<<ans<<endl;
   }
    
    Fi_Amanillah;
}