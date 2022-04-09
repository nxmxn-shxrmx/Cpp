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
        string s;cin>>s;
        ll k = 0;
        string t = "";
        t=t+s[0];

        for(int i =1;i<n;++i)
        {
            if(s[i]==s[i-1] && s[i]=='0')
            {
                t = t+"11"+s[i];
                k+=2;
            }
            else
            t+=s[i];
        }
        for(int i =0;i<t.size()-2;++i)
        {
            if(t[i]==t[i+2] && t[i]=='0')
            k+=1;
        }
        cout<<k<<"\n";

    }


    return 0;
}