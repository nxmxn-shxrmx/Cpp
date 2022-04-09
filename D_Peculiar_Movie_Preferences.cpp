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

        map<string,bool>m;

        bool k = 0;
        
        for(int i = 0;i<n;++i)
        {
            string s;cin>>s;

            m[s]=true;

            reverse(begin(s),end(s));

            if(m[s] || m[s.substr(0,s.size()-1)])
            k=1;

            for(auto c = 'a';c<='z';++c)
            if(m[s+c])
            k=1;
        }
        if(k)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }



    return 0;
}