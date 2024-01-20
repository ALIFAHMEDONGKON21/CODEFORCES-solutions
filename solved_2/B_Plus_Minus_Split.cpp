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
    

while (t--)
{
    /* code */
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    int total = 0;
    int totaln = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '+') {
            total++;
        } else {
           totaln++;
        }

        
    }
    // cout<<total<<" "<<totaln<<endl;
    if(total>=totaln)
    {
        cout<<total-totaln<<endl;
    }
    else
    {
        cout<<totaln-total<<endl;
    }
}

    
    Fi_Amanillah;
}