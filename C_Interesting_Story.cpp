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
        vector<int>a,b,c,d,e;
        for(int i = 0;i<n;++i)
        {
            string s;cin>>s;
            map<int,int>m;
            for(auto c:s)
                m[c]++;
            a.push_back(m['a']-(s.size()-m['a']));
            b.push_back(m['b']-(s.size()-m['b']));
            c.push_back(m['c']-(s.size()-m['c']));
            d.push_back(m['d']-(s.size()-m['d']));
            e.push_back(m['e']-(s.size()-m['e']));
           
        }  
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        sort(c.rbegin(),c.rend());
        sort(d.rbegin(),d.rend());
        sort(e.rbegin(),e.rend());

        ll p =0;
        ll k =0;
        ll ans = 0;
       
          for(auto x:a)
        {
            if(ans+x>0)
            k++,ans+=x;

            else
            break;
        }
    
        p = max(k,p);
        k =0;
        ans = 0;
          for(auto x:b)
        {
            if(ans+x>0)
            k++,ans+=x;

            else
            break;
        }
        p = max(k,p);
        k =0;
        ans = 0;
          for(auto x:c)
        {
            if(ans+x>0)
            k++,ans+=x;

            else
            break;
        }
        p = max(k,p);
        k=0;
        ans = 0;
          for(auto x:d)
        {
            if(ans+x>0)
            k++,ans+=x;

            else
            break;
        }
        p = max(k,p);
        k=0;
        ans=0;
          for(auto x:e)
        {
            if(ans+x>0)
            k++,ans+=x;

            else
            break;
        }
        p = max(k,p);

        cout<<p<<"\n";
    }
    return 0;
}