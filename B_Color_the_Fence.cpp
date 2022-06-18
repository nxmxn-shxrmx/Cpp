#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;cin>>n;
    map<ll,ll>m;
    ll h = INT_MAX;
    priority_queue<pair<int,int>>q;
    for(int i = 0;i<9;++i)
    {
        ll f;cin>>f;
        h = min(f,h);
        q.push({i+1,f});    
        m[f]=i+1;
    }
    if(h>n)
    cout<<-1<<"\n";

    else if(n%h==0)
    {
        ll k = n/h;
        while(k--)
        cout<<m[h];
    }
    else
    {
        ll k = n/h;
        string s = "";
        int i =0;
        while(k--)
        {
            s+=to_string(m[h]);
        }
        k = n%h;
        while(k>=0 && q.size() && i<s.size())
        {
            while(k+h<q.top().second)
            q.pop();


            if(q.top().first>m[h])
            s[i++]=(q.top().first)+'0';

            else
            break;

            k = k+h-q.top().second;
        }

        cout<<s<<"\n";
    }

    return 0;
}