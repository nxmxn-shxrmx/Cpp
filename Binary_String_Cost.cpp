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
        ll n,x,y;
        cin>>n>>x>>y;

        string s;cin>>s;  

        if(x>y)
        {
            sort(s.rbegin(),s.rend());
            bool k =0;
            for(int i = 1;i<s.size();++i)
            {
                string t = "";
                t+=s[i-1];
                t+=s[i];
               if(t=="10")
                {
                    k =1;
                    break;
                }
            }
            if(k)
            cout<<y<<"\n";
            else
            cout<<0<<"\n";
        }
        else
        {
             sort(s.begin(),s.end());
            bool k =0;
            for(int i = 1;i<s.size();++i)
            {
                string t = "";
                t+=s[i-1];
                t+=s[i];
                if(t=="01")
                {
                    k =1;
                    break;
                }
            }
            if(k)
            cout<<x<<"\n";
            else
            cout<<0<<"\n";

        }
    }

    return 0;
}