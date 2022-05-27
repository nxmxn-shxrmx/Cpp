#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;
ll merge(vector<int>&v,int l,int m,int r)
{
        int i = l;
        int j = m+1;
        vector<int>b;
        ll c = 0;
        while(i<=m && j<=r)
        {
            if(v[i]>=v[j])
            {
                b.push_back(v[j]);
                ++j;
            }
            else
            {
                b.push_back(v[i]);
                c+=(j-m-1);
                ++i;
            }
        }
        while(i<=m)
        {
            b.push_back(v[i]);
            c+=(j-m-1);
            ++i;
        }
         while(j<=r)
        {
            b.push_back(v[j]);
            ++j;
        }
        for(int i =l;i<=r;++i)
        {
            v[i]=b[i-l];
        }
        return c;
}
ll bre(vector<int>&v,int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        ll h = bre(v,l,m) + bre(v,m+1,r);
        h+= merge(v,l,m,r);
        return h;
    }
    return 0;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i = 0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        cout<<bre(v,0,n-1)<<"\n";
    }

    return 0;
}