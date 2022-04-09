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
        string s;cin>>s;
        char a = s[0];
        string v ="";
        v+=a;

        if(s.size()>1 && s[0]==s[1])
        cout<<v+v<<"\n";

        else
        {

        for(int i =1;i<s.size();++i)
        {
            int h = s[i]-'0';
            int q = a - '0';
            if(h<=q)
            {
                v+=s[i];
                a = s[i];
            }
            else
            break;
        }
        cout<<v;
        for(int i =v.size()-1;i>=0;--i)
        cout<<v[i];

        cout<<"\n";
        }

    }



    return 0;
}