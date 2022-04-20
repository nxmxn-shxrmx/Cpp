#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int t;cin>>t;
   while(t--)
   {
        int n,x;cin>>n;
        vector<int>v;
    for(int i= 0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    cin>>x;
    
    int se = 0;
    int j = 0;
    int k = 0;
    for(int i = 0;i<n;++i)
    {
        se+=v[i];
           if(se==x)
        {
            for(int p = j;p<=i;++p)
            cout<<v[p]<<" ";            
            break;
        }
        if(se>x)
        {
            se-=v[j];
            ++j;
        }
         if(se==x)
        {
            for(int p = j;p<=i;++p)
            cout<<v[p]<<" ";            
            break;
        }
    }
        cout<<"\n";

   }

    return 0;
}