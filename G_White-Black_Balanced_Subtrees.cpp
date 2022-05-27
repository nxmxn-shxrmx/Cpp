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
        //w=1
        //b=-1
        vector<int>q(n,0);
        vector<vector<int>>v(n);
        for(int i= 1;i<n;++i)
        {
            int f;cin>>f;
            v[f-1].push_back(i);
        }
        int c = 0;
        string s;cin>>s;
        for(int i =n-1;~i;--i)
        {
            int d = s[i]=='B'?-1:1;
            for(auto c:v[i])
            {
                d+=q[c];
            }
            q[i]=d;
            d==0?c++:c;
        }
        cout<<c<<"\n";
    
    }

    return 0;
}