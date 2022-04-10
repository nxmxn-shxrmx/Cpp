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
        string s;cin>>s;
        string c;cin>>c;
        if(c.size()>s.size())
        {
            cout<<"NO\n";
            continue;
        }
        map<char,int>m1,m2;
        for(auto d:s)
        m1[d]++;

        for(auto d:c)
        m2[d]++;

        bool k =false;

        for(auto c:m2)
        {
            if(m2[c.first]>m1[c.first])
            {
                k = true;
                break;
            }
        }
        if(k)
        {
            cout<<"NO\n";
            continue;
        }
        int i = s.size()-1;
        int j = c.size()-1;
        for(i;i>=0 && j>=0;)
        {
            if(c[j]==s[i])
            --j,--i;

            else
            i-=2;
        }
        if(j==-1)
        cout<<"YES\n";

        else
        cout<<"NO\n";

    }

    return 0;
}