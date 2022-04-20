#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        map<char,int>m;
        for(int i = 0;i<n;++i)
        {
            char f;cin>>f;
            m[f]++;
            if(m['D']==0 || m['K']==0)
            cout<<max(m['D'],m['K'])<<" ";
            else
            {
                int ma = max(m['D'],m['K']);
                int mi = min(m['D'],m['K']);
                if(ma%mi==0)
                cout<<mi<<" ";

                else
                cout<<1<<" ";
            }
        }
        cout<<"\n";

    }
    



    return 0;
}