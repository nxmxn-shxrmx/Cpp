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
        map<int,int>m;
        int c = INT_MIN;
        for(int i =0;i<n;++i)
        {
            int f;cin>>f;
            m[f]++;
            c = max(c,m[f]);
        }
        int a =0;
        while(c<n)
        {
            int d = min(n-c,c);
            a +=1+d;
            c+=d;
        }
        cout<<a<<"\n";
    }


    return 0;
}