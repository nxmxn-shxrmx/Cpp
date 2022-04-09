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
        ll n;cin>>n;
        vector<ll>v;
        int c = 0;
        int j =-1;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
            if(v[i]==1)
            c++,j=i;
        }
        if(c!=1)
        cout<<"NO\n";
        else
        {
            bool k = 1;
            rotate(v.begin(),v.begin()+j,v.end());
            for(int i =1;i<n;++i)
            if((v[i]-v[i-1])>1)
            {
                k=0;
                break;
            }
            if(k)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
        
    }


    return 0;
}

