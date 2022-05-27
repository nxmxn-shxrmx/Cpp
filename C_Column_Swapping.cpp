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
        int n,m;cin>>n>>m;
        vector<vector<int>>v;
        vector<bool>b(m,false);
        vector<vector<int>>sor;
        int c = 0;
        int x=INT_MAX,y=INT_MIN;
        for(int i =0;i<n;++i)
        {
            vector<int>h;
            for(int j = 0;j<m;++j)
            {
                int f;cin>>f;
                h.push_back(f);
            }
            v.push_back(h);
            if(c>2)
            continue;

            if(is_sorted(h.begin(),h.end()))
            {
                sor.push_back(h);
                continue;
            }

            sort(h.begin(),h.end());
            for(int k = 0;k<m;++k)
            {
                if(v[i][k]!=h[k])
                {
                    if(!b[k])
                    {
                        x = min(x,k);
                        y = max(y,k);
                        b[k]=true;
                        c++;
                    }
                }
            }

        }
        if(c>2)
        cout<<-1<<"\n";

        else
        {
            if(c==0)
            cout<<1<<" "<<1<<"\n";
            else
            {
    
                bool k = true;
                for(auto c:sor)
                {
                    swap(c[x],c[y]);
                    if(!is_sorted(c.begin(),c.end()))
                    {
                        k =false;
                        break;
                    }
                }
                if(k)
                cout<<x+1<<" "<<y+1<<"\n";
                else
                cout<<-1<<"\n";
            }
        }
    }

    return 0;
}