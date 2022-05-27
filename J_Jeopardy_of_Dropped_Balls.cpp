#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,k;cin>>n>>m>>k;
    vector<vector<int>>v(n,vector<int>(m));
    vector<bool>b(m);

    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j<m;++j)
        cin>>v[i][j];
    }

    while(k--)
    {
        int h;cin>>h;
        h-=1;
        if(b[h])
        {
            cout<<h+1<<" ";
            continue;
        }
        bool u= true;
        int i = 0,j = h;
        while(i<n)
        {
            if(v[i][j]==2)
                ++i;

            else if(v[i][j]==3)
            v[i][j]=2,--j,u=false;

            else
            v[i][j]=2,++j,u =false;
        }
        cout<<j+1<<" ";
        if(u)
        b[j] = true;

    }

    return 0;
}