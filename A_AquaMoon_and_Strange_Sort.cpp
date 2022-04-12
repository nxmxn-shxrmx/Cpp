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
        multiset<int>s;
        vector<int>v;
        map<int,int>o1,e1;
        map<int,int>o2,e2;
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            s.insert(f);
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<"YES\n";
            continue;
        }
        for(int i=0;i<n;++i)
        {
            if(i%2==0)
                e1[v[i]]++;

            else
                o1[v[i]]++;
        }
        int i= 0;
        bool k =0;
        for(auto c:s)
        {
            if(i%2==0)
                 e2[c]++;

            else
                o2[c]++;
            
            ++i;
        }
        for(auto c:e1)
        {
            if(e1[c.first]!=e2[c.first])
            {
                k=1;
                cout<<"NO\n";
                break;
            }
        }
        if(k)
        continue;
        for(auto c:o1)
        {
            if(o1[c.first]!=o2[c.first])
            {
                k=1;
                cout<<"NO\n";
                break;
            }
        }

        if(k==0)
        cout<<"YES\n";
    
    }

    return 0;
}