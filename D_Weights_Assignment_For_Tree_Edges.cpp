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
        vector<int>v,p;
        int r;
        vector<bool>d(n,false);
        vector<int>ans(n,0);
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f-1);
            if(f-1==i)
            r = i;
        }
        bool k = false;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            p.push_back(f-1);
            if(r!=f-1 && !d[v[f-1]])
            {
                k =true;
                continue;
            }
            d[f-1]=true;
        }
        if(k)
        cout<<-1<<"\n";
        else
        {
            ll y = 0;
            for(int i =1;i<n;++i)
            {
                int o = p[i];
                ans[o] = y+1;
                y = ans[o];
            }
            for(int i = 0;i<n;++i)
            {
                cout<<ans[i]-ans[v[i]]<<" ";
            }
            cout<<"\n";
        }


    }

    return 0;
}