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
    vector<int>v;
    vector<int>dp(n+1);
    for(int i =  0;i<3;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    sort(v.begin(),v.end());

    if(n%v[0]==0)
    cout<<n/v[0]<<" ";

    else
    {
        int h = n/v[0];
        int g = 0;
        while (h--)
        {
            if((n-h*v[0])%v[1]==0)
            {
                g = max(h+(n-h*v[0])/v[1],g);
            }
            if((n-h*v[0])%v[2]==0)
            {
                g = max(h+(n-h*v[0])/v[2],g);
            }

            int d = n-h*v[0];
            int y = d/v[1];
            if(y%v[1]==0)
            continue;

            while(y--)
            {
                if((d-y*v[1])%v[2]==0)
                {
                    g = max(g,h+y+(d-y*v[1])/v[2]);
                }
            }

        }
         h = n/v[1];
        if(n%v[1]==0)
        g = max(g,h);
        while(h--)
        {
            if((n -h*v[1])%v[2]==0)
            {
                g = max(g,h+(n-h*v[1])/v[2]);
                break;
            }
        }
        
        cout<<g<<"\n";   
    }

    return 0;
}