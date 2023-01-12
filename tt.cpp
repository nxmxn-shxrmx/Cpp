#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> shor(int n,int x,int y)
{
    vector<int>v;
    if(abs(x-y)<=1)
    {

        while(n--)
            v.push_back(n);

        
        return v;
    }
    vector<vector<ll>>dis(n,vector<ll>(n));

    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j<n;++j)
        {
            if(i==j)
                dis[i][j]=0;
            else
                dis[i][j]=INT_MAX;
        }
    }
    for(int i = 0;i<n-1;++i)
    {
        dis[i][i+1]=1;
    }
    dis[x-1][y-1]=1;

    for(int k =0;k<n;++k)
    {
        for(int i = 0;i<n;++i)  
        {
            for(int j = 0;j<n;++j)
            {
                dis[i][j]= min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }

    }
    v = vector<int>(n);
    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j<n;++j)
        {
            if(dis[i][j]==INT_MAX)
            continue;
            else
            v[dis[i][j]-1]++;
        }

    }
return v;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,x,y;cin>>n>>x>>y;

    vector<int>v = shor(n,x,y);
    for(auto c:v)
    cout<<c<<" ";

    return 0;
}