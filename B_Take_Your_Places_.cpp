#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
 vector<ll>v(N);
ll fun(int x,int n)
{
    ll ans = 0;
    ll d =0;
    for(int i =1;i<=n;++i)
    {
        if(v[i]!=x)
        d +=(x-v[i]);

        ans+=abs(d);
        x ^=1;
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll c = 0;
        map<int,int>m;
        for(int i = 1;i<=n;++i)
        {
            int f;cin>>f;
            v[i] = f%2;
            m[v[i]]++;
        }
        if(n%2)
        {
            if(m[0]==m[1]+1)
                cout<<fun(0,n)<<"\n";
    
            else if(m[1]==m[0]+1)
            cout<<fun(1,n)<<"\n";

            else
            cout<<-1<<"\n";
        }
        else
        {
            if(m[0]==m[1])
            {
                cout<<min(fun(0,n),fun(1,n))<<"\n";
            }
            else
            cout<<-1<<"\n";

        }

    }



    return 0;
}