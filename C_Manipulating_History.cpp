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
        map<char,int>m;
        for(int i = 0;i<2*n+1;++i)
        {
            string s;cin>>s;
            for(auto x:s)
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second&1)
            {
                cout<<x.first<<"\n";
                break;
            }
        }
    }

    return 0;
}