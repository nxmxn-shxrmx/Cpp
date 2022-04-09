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
        ll n,k;cin>>n>>k;
        set<ll>s;
        
        if(n==0)
        {
            s.insert(k/2);
            s.insert((k+1)/2);
            cout<<s.size()<<"\n";
            for(auto c:s)
            cout<<c<<" ";
            cout<<"\n";
        }
        else if(k==0)
        {
            s.insert(n/2);
            s.insert((n+1)/2);
            cout<<s.size()<<"\n";
            for(auto c:s)
            cout<<c<<" ";
            cout<<"\n";
        }
        else
        {
            if((n+k)&1)
            {
                ll u = abs(n-k)/2;
                int i =0;
                while(u+i<=(n+k))
                {
                    s.insert(u+i);
                    ++i;
                }
                s.insert(n+k-u);
            }
            else
            {
                ll u = abs(n-k)/2;
                int i =0;
                while(u+i<=(n+k))
                {
                    s.insert(u+i);
                    i+=2;
                }
                s.insert(n+k-u);
            }

            cout<<s.size()<<"\n";
            for(auto c:s)cout<<c<<" ";

            cout<<"\n";
        }


            
    }



    return 0;
}