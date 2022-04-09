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
        vector<int>v;
        map<int,int>m;
        map<int,int>sm;

        for(int i=0;i<2*n;++i){
            int f;cin>>f;
            if(m.find(f)==m.end())
            {
                v.push_back(f);
            }
            m[f]++; 
        }
        sort(begin(v),end(v));
        for(int i =1,j=n;i<=n,j>0;++i,--j){
            int f = v[(i+1)/2 -1];
                int g=(n-i+1)/2;
                g = v[n-g-1];
                sm[g]++;
                sm[f]++; 
        }
        bool  b=true;
        for(int i =0;i<n;++i){
            if(m[v[i]]!=sm[v[i]])
            {
            cout<<-1<<"\n";
            b = false;
            break;
            }
        }
        if(b)
        {
            for(auto x:v)
            cout<<x<<" ";

            cout<<"\n";
        }

    }


    return 0;
}