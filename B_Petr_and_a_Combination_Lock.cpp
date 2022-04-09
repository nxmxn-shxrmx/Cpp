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
    vector<int>v(n);

    for(int i =0;i<n;++i)
        cin>>v[i];

    for(int i = 0;i<(1<<n);++i)
    {
        int s = 0;
        for(int j = 0;j<n;++j)
        {
            if(i&(1<<j))
            s+=v[j];
            else
            s-=v[j];
        }
        if(s%360==0)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";




    return 0;
}