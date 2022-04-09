#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

bool check(vector<int>&v,int x,int m,int n)
{
    int c =1;
    int e = v[0];
    for(int i =1;i<n;++i)
    {
        if(v[i]-e>=x)
        {
            c++;
            e = v[i];
        }
        if(c==m)
        return true;
        
    }
    return false;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            v.push_back(f);
        }
        sort(begin(v),end(v));
        int l =1;
        int r = v[n-1]-v[0];
        ll q = 0;

        while(r-l>1)
        {
            int mid = (l+r)/2;

            if(check(v,mid,m,n))
            {
                q = mid;
                l = mid;
            }
            else
            r = mid -1;
        }
        if(check(v,r,m,n))
        cout<<r<<"\n";

        else
        cout<<q<<"\n";
    }


    return 0;
}