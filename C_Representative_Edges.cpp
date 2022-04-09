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
        int n;cin>>n;
        vector<double>v;

        for(int i = 0;i<n;++i)
        {
            double f;cin>>f;
            v.push_back(f);
        }
        if(n==1 || n==2)
        {
            cout<<0<<"\n";
            continue;
        }
        ll k = n;
        for(int i = 0;i<n;++i)
        {
            for(int j = i+1;j<n;++j)
            {
                ll c = 0;
               if(i!=j)
               {
                   for(int u = 0;u<n;++u)
                   {
                       if(i!=u && j!=u)
                       {
                           if( (v[u]-v[j])/(u-j)  != (v[u]-v[i])/(u-i)  )
                                c++;
                       }
                   }
                   k = min(c,k);
               }
                
            }
        }
        cout<<k<<"\n";
    }



    return 0;
}