#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   #ifdef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin);  
   freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
   #endif

    int n;cin>>n;
    vector<ll>v(n);
    for(int i = 0;i<n;++i)
    cin>>v[i];

    sort(v.begin(),v.end());

    int l = 0,r = n-1;
    while(l<r)
    {
        int m = (l+r)/2;
        bool k = false;
        for(int i = 0;i<=m;++i)
        {
            if(v[n-(m-i)-1]<=2*v[i])
            {
                k = true;
                break;
            }
        }
        if(k)
        r = m;
        else
        l = m+1;
    }
    cout<<r<<"\n";

    return 0;
}