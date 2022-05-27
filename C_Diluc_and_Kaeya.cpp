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
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        int d = 0;
        int k = 0;

        map<pair<int,int>,int>m;

        for(int i = 0;i<n;++i)
        {
            if(s[i]=='K')
            k++;

            else
            d++;

            int h = __gcd(d,k);
            int a = d/h;
            int b = k/h;
            m[{a,b}]++;
            cout<<m[{a,b}]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}