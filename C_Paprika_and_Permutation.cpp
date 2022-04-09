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
        set<ll>s;
        vector<ll>v;
        for(int i =1;i<=n;++i)
        s.insert(i);

        for(int i =0;i<n;++i)
        {
            ll f;cin>>f;
            if(s.find(f)!=s.end())
            s.erase(f);

            else
            v.push_back(f);
        }
        sort(begin(v),end(v),greater<ll>());

        bool k = false;
        set<ll>::iterator it = s.end();

        for(auto c:v)
        {
            --it;
            ll e = *it;

            if(e>(c-1)/2)
            {
                k = true;
                cout<<-1<<"\n";
                break;
            }
        }
        if(k==false)
        cout<<v.size()<<"\n";



    }
    return 0;
}