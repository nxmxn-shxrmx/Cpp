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
        int a,b;cin>>a>>b;
        int n = b-a+1;
        vector<int>p;
        for(int i=0;i<n;++i)
        {
            int f;cin>>f;
            p.push_back(f);
        }
        ll k =0;
        vector<int>v(32);
        for(int i = 0;i<n;++i)
            for(int j =0;j<=17;++j)
                if(i&(1<<j))
                v[j]++;
        
        int s = 0;
        for(int i =0;i<=17;++i)
        {
            int c = 0;
            for(int j = 0;j<n;++j)
            if(p[j]&(1<<i))
            c++;
            if(c!=v[i])
            s+=(1<<i);
        }
        cout<<s<<"\n";
    }



    return 0;
}