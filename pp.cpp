#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int x,vector<int>v,int k)
{
    int s = 0;
    for(auto c:v)
        if(c>=x)
            s+=(c-x);
    return s>=k;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;++i)
    {
        int f;cin>>f;
        v.push_back(f);
    }
    sort(v.begin(),v.end());
    int k;cin>>k;
    int l = 0;
    int r = v[n-1];
    int ans = 0;
    while(l<=r)
    {
        int m =(l+r)/2;
        if(check(m,v,k))
            ans = m,l = m+1;
        else
            r = m-1;
    }
    cout<<ans<<"\n";
    
    return 0;
}