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
    int size=0;
    for(int i =0;i<n;++i)
    {
        int f;cin>>f;
        int l = 0,r=size;
        while(l!=r)
        {
            int m = (l+r)/2;
            if(v[m]<f)
                l = m+1;
            else
                r= m;
        }
        v[l]=f;
        if(l==size)
        ++size;
    }
    cout<<size<<"\n";

    return 0;
}