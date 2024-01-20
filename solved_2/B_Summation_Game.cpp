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
      int n,k,x;           cin>>n>>k>>x;
      vector<ll> a(n);
 
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
 
      sort(a.begin(),a.end());
 
      vector<ll> pref(n,0);
      pref[0]=a[0];
      for(int i=1;i<n;i++){
         pref[i]=pref[i-1]+a[i];
      }
 
      ll ans=LLONG_MIN;
      for(int remove=0;remove<=k;remove++){
         if(remove==n){
            ans=max(ans,0LL);
            break;
         }
         ll afterRemoval=pref[n-1-remove];
 
         int canNegify=min(n-remove,x);
         int lastRemainingIndex=n-1-remove;
         int negifiedTill=max(0,lastRemainingIndex-canNegify+1);
 
         ll gain;
         ll negifiedWindowSum;
         if(negifiedTill==0){
            negifiedWindowSum = pref[lastRemainingIndex];
            gain= -negifiedWindowSum;
         }
         else{
            negifiedWindowSum=pref[lastRemainingIndex]-pref[negifiedTill-1];
            gain = pref[negifiedTill-1]-negifiedWindowSum;
         }
 
         ans=max(ans,gain);
      }
 
 
      cout<<ans<<endl;
 
   }
    
    Fi_Amanillah;
}