#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;cin>>n>>m;
    vector<int>v(n+1);
    int s = 0;
    while(m--)
    {
        int i,j;cin>>i>>j;
        v[min(i,j)]++;
        if(v[min(i,j)]==1)
        s++;
    }
    int t;cin>>t;
    while(t--)
    {
        int q;cin>>q;
        if(q==1)
        {
            int i,j;cin>>i>>j;
            v[min(i,j)]++;
            if(v[min(i,j)]==1)
            s++;
        }
        else if(q==2)
        {
            int i,j;cin>>i>>j;
            v[min(i,j)]--;
            if(v[min(i,j)]==0)
            s--;
        }
        else
        {
            cout<<n-s<<"\n";
        }
        
    }


    return 0;
}