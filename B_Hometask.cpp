#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    map<int,ll>m;
    multiset<ll>s;
    ll h = 0;
    for(int i  =0;i<n;++i)
    {
        int f;cin>>f;
        if(f!=0)
        s.insert(f);
        h+=f;
        m[f]++;
    }
    if(m[0]==0)
    cout<<-1<<"\n";
    else
    {
        if(h%3!=0)
        {
            for(auto c:m)
            {
                if((h-c.first)%3==0)
                {
                    s.erase(s.find(c.first));
                    m[c.first]--;
                    h-=c.first;
                    break;
                }
            }
            if(h%3!=0)
            {
                set<int>r;
                for(auto c:m)
                {
                    for(auto x:m)
                    {
                        if(x.first==c.first && x.second==1)
                        continue;

                        if((h-c.first-x.first)%3==0)
                        {
                            int j = max(c.first,x.first);
                            int k = min(c.first,x.first);
                            r.insert(j*10+k);
                        }
                    }
                }
                auto it = r.begin();
                s.erase(s.find(*it/10));
                s.erase(s.find(*it%10));
            }
        }
        string u = "";
        for(auto c:s)
        {
            u+=to_string(c);
        }
        if(u.size()==0)
        {
            cout<<0<<"\n";
            return 0;
        }
        reverse(u.begin(),u.end());
        cout<<u;
        while(m[0]--)
        cout<<0;
    }

    return 0;
}