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
        ll n,a,b;cin>>n>>a>>b;
        ll u = 1;

        if(a==1)
        {
            if((n-1)%b==0)
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
        else
        {
            bool k = 1;
            while(u<=n)
            {
                if((n-u)%b==0)
                {
                    k =0;
                    cout<<"Yes\n";
                    break;
                }

                u*=a;
            }
            if(k)
            cout<<"No\n";
        }
    }

    return 0;
}