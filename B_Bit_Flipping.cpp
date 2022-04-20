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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        vector<int>v(n);
        string p = s;
        int e=0;
        int u = k;
        int i = 0;
        while(i<n && u>0)
        {
            s[i] ^= e;
            if(u%2!=s[i]-'0' || i==n-1)
            {
                ++i;
                continue;
            }
            ++v[i];
            --u;
            e^=1;
            ++i;
        }
        v[n-1] += u;
        for(int i=0;i<n;++i)
            if((k-v[i])%2)
                p[i]^=1;
        cout<<p<<"\n";
        for(auto c:v)
        cout<<c<<" ";
        cout<<"\n";
    }

    return 0;
}

 
 
 