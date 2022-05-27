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
        int n,l,r;cin>>n>>l>>r;

        multiset<ll>ls,rs;
        map<int,int>m1,m2;
        for(int i = 0;i<l;++i)
        {
            int f;cin>>f;
            ls.insert(f);
            m1[f]++;
        }
        for(int i = 0;i<r;++i)
        {
            int f;cin>>f;
            if(m1[f]!=0)
            {
                m1[f]--;
                ls.erase(ls.find(f));
                continue;
            }
            rs.insert(f);
            m2[f]++;
        }
        ll c= 0;
        if(l==r)
        {
            for(auto x:ls)
            {
                if(m2[x]==0)
                c++;
                else
                m2[x]--;
            }
        }
        else if(l>r)
        {
            multiset<ll>s;
            for(auto c:m1)
            {
                if(c.second%2)
                {
                    s.insert(c.first);
                    ls.erase(ls.find(c.first));
                    m1[c.first]--;
                }
            }   
            while(s.size()!=0 && rs.size()!=0)
            {
                c++;
                rs.erase(rs.find(*rs.begin()));
                s.erase(s.find(*s.begin()));
            }
            while(rs.size()!=0)
            {
                rs.erase(rs.find(*rs.begin()));
                ls.erase(ls.find(*ls.begin()));
                c++;
            }
            c+=s.size();
            c+=ls.size()/2;
            
        }
        else
        {
            
            multiset<ll>s;
            for(auto c:m2)
            {
                if(c.second%2)
                {
                    s.insert(c.first);
                    rs.erase(rs.find(c.first));
                    m2[c.first]--;
                }
            }   
            while(s.size()!=0 && ls.size()!=0)
            {
                c++;
                ls.erase(ls.find(*ls.begin()));
                s.erase(s.find(*s.begin()));
            }
            while(ls.size()!=0)
            {
                ls.erase(ls.find(*ls.begin()));
                rs.erase(rs.find(*rs.begin()));
                c++;
            }
            c+=s.size();
            c+=rs.size()/2;
        }
        cout<<c<<"\n";

    }

    return 0;
}