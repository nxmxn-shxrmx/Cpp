#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
vector<ll>v(40001);
vector<ll>p;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

   
    
    for(int i =1;i<=40000;++i)
    {
        string s = to_string(i);
        string r = s;
        reverse(s.begin(),s.end());

        if(r==s)
        p.push_back(i);
    }
    v[0]=1;
    for(auto c:p)
    {
        for(int i =1;i<40001;++i)
        {
            if(i-c>=0)
            v[i]+=v[i-c];
            v[i]%=mod;
        }
    }
    while(t--)
    {
        int n;cin>>n;
        cout<<v[n]<<"\n";

    }

    return 0;
}