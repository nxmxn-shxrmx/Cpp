#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

bool check(vector<pair<int,int>>&v,int m,int n)
{
    int k =0;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>>v;
        for(int i =0;i<n;++i)
        {
            int f,g;
            cin>>f>>g;
            v.push_back({f,g});
        }
        int l =1;
        int r = n;
        while(r-l>1)
        {
            int mid = (l+r)/2;

            if(check(v,mid,n))
            r = mid;

            else
            l = mid-1;
        }

    }



    return 0;
}