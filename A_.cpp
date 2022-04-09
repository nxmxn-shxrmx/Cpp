#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;
        int ma = INT_MAX;
        int mi = INT_MIN;
        map<int,int>mp;

        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            mp[f]++;
            ma =min(ma,f);
            mi = max(mi,f);
        }
        if(mp[ma]==mp[mi])
        {
            if((ma%2==1 && mi%2==1)||(ma%2==0 && mi%2==0))
            cout<<"0\n";

            else
            cout<<"1\n";
        }
        else
        cout<<"1\n";
    }


    return 0;
}