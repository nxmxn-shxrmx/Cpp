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
        vector<int>v;
        set<int>sn,sm;
        for(int i = 0;i<n;++i)
        {
            sn.insert(i+1);
            sm.insert(i+1);
            int f;cin>>f;
            v.push_back(f);
        }
        sn.erase(v[0]);
        cout<<v[0]<<" ";
        for(int i =1;i<n;++i)
        {
            if(v[i]>v[i-1])
            {
                sn.erase(v[i]);
                cout<<v[i]<<" ";
            }
            else
            {
                cout<<*sn.begin()<<" ";
                sn.erase(*sn.begin());
            }
        }
        cout<<"\n";
        cout<<v[0]<<" ";
        sm.erase(v[0]);
        for(int i =1;i<n;++i)
        {
            if(v[i]>v[i-1])
            {
                sm.erase(v[i]);
                cout<<v[i]<<" ";
            }
            else
            {
                auto it = sm.lower_bound(v[i]);
                --it;
                cout<<*it<<" ";
                sm.erase(*it);
            }
        }
        cout<<"\n";

    }


    return 0;
}