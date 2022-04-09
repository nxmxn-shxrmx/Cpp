#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        vector<pair<int,int>>v;
        for(int i =0;i<n;++i){
            int f;cin>>f;
            v.push_back(make_pair(f,i+1));
        }
        int g = (n+1)/2;
        ll h = 0;
        ll l = g,r = g;
        sort(begin(v),end(v));
        vector<pair<int,int>>p;
        p.push_back(make_pair(0,g));
        for(int i =n-1;i>-1;--i){   

            if(i%2)
            {
            l--;
            h+=2*v[i].first*abs(g-l);
            p.push_back(make_pair(v[i].second,l));

            }
            else
            {
                r++;
                h+=2*v[i].first*abs(g-r);
               p.push_back(make_pair(v[i].second,r));
            }

        }
        cout<<h<<"\n";

        sort(begin(p),end(p));
        for(auto x:p)
        cout<<x.second<<" ";

        cout<<"\n";

    
        
    }



    return 0;
}