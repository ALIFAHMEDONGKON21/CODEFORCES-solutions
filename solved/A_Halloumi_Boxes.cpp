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
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;
#define    Fi_Amanillah                     return 0;


//......Let's Start ........................//



int main(){
    
    int t; 
    cin >> t; 

    while (t--) { 
        int n, k; 
        cin >> n >> k; 

       vi v(n);
        for (int i = 0; i < n; ++i) { 
            cin >> v[i]; 
        } 

        vector<int> sorted_a = v; 
        sort(sorted_a.begin(), sorted_a.end()); 

        bool possible = true; 

        for (int i = 0; i < n; ++i) { 
            int j = i; 
            while (j < n && a[j] != sorted_a[i]) { 
                ++j; 
            } 

            int len = j - i + 1; 

            if (len > k) { 
                possible = false; 
                break; 
            } 

            reverse(v.begin() + i, v.begin() + j + 1); 
        } 

        if (is_sorted(a.begin(), a.end())) { 
            cout << "YES" << endl; 
        } else { 
            cout << "NO" << endl; 
        } 
    } 
    
   Fi_Amanillah ;
}