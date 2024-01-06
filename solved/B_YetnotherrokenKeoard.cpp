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



//......Let's Start ........................//



int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        string s;
        cin>>s;

        
        stack<int>cap;
        stack<int>sma;

        for(int i=0;i<s.size(); i++)
        {
           if(s[i]=='A' and s[i]=='Z' and s[i] != 'B')cap.push(i);
           if(s[i]=='a' and s[i]=='z' and s[i]!='b' )sma.push(i);

           if(s[i]!='B' && !cap.empty())
           {
            s[cap.top()]='0';
            cap.pop();    
           }
           
            if(s[i]=='b' && !sma.empty())
            {
                s[sma.top()]='0';
                sma.pop(); 
            }                       
        }
            for(int i=0; i<s.size(); i++)
            {
                if (s[i]!='B' & s[i]!='b' & s[i]!='0')
                
                {
                    /* code */
                    cout<<s[i];
                }
                
            }
            cout<<endl;
                    
        
    }
    
    
    Fi_Amanillah;
}