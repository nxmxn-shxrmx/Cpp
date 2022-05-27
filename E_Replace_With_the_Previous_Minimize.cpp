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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        set<char>p;
        map<char,char>m;
        int q =k;

        if(k>=25)
        {
            for (int  i = 0; i < n; i++)
            {
                cout<<'a';
            }
            cout<<"\n";
            continue;
            
        }   

        int i = 0;
        while(i<n)
        {
            char a = 'a';
            char z = 'z';
            if(p.lower_bound(s[i])!=p.end())
            {
                ++i;
                continue;
            }
            for(i;i<n;++i)
            {

                int h =  min(q,s[i]-'a');
                char e = s[i]-h;
                if(e>z)
                break;
            
                if(s[i]>a)
                {
                    a = s[i];
                    z = e;
                }
            }
            p.insert(a);
            m[a]=z;
            q  = q - (a-z);
        }
        for(auto c:s)
        {
            auto it = p.lower_bound(c);
            char w = m[*it];
            cout<<(w<c?w:c);
        }
        cout<<"\n";
        
    }
    return 0;
}