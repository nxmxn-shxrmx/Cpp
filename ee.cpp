#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (ll)(1e9 +7)

const int N =1e5+10;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(ll i = 99993;i<=1000000;++i)
    {
        bool k =true;
        for(ll j=2;j<(i+1)/2;++j)
        {
            if(i%j==0)
            {
                k = false;
                break;
            }
        }
        cout<<i<<",";
    }

    return 0;
}