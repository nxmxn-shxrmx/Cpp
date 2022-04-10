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
        vector<int>p,v;
        
        for(int i= 0;i<n;++i)
        {
            int f;cin>>f;
            p.push_back(f);
        

        }
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            if(p[i]>v[i])
            swap(v[i],p[i]);
        }
        ll s = 0;
        for(int i = 0;i<n-1;++i)
        {
            s+=abs(v[i]-v[i+1])+abs(p[i]-p[i+1]);
        }

        
        cout<<s<<"\n";
    }

    return 0;
}