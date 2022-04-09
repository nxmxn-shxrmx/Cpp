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
        vector<pair<int,int>>p;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            p.push_back({f,i});
        }
        vector<int>s(n);
        int h = n-1;
        while(h!=0)
        {
            sort(p.begin(),p.end());
            if(p[h].first==p[h].second+1)
            s[h]=0;
            else
            s[h]= p[h].second+1;
            rotate(v.begin(),v.begin()+(p[h].second+1)%p[h].first,v.begin()+p[h].first);
            p.clear();
            for(int i = 0;i<h;++i)
                p.push_back({v[i],i});

            // for(auto c:v)
            // cout<<c<<" ";
            // cout<<"\n";
            h-=1;
        }
        for(auto c:s)
        cout<<c<<" ";
        cout<<"\n";
    }


    return 0;
}