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
        // __builtin_ctz(x)
        vector<int>v;
        int m  = INT_MAX;
        ll h = 0;
        for(int i  =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            if(f%2)
            h++;
            else
            m = min(__builtin_ctz(f),m);
        }
        
        if(h!=0)
        cout<<n-h<<"\n";
        else
        cout<<n-1+m<<"\n";
    }

    return 0;
}