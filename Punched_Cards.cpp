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

    for(int p = 1;p<=t;++p)
    {
        int n,m;
        cin>>n>>m;
        cout<<"Case #"<<p<<":\n";
        cout<<"..";
        for(int i = 1;i<=2*m-1;++i)
        {
            if(i&1)
            cout<<'+';
            else
            cout<<'-';
        }
        cout<<"\n";
        cout<<"..";
        for(int i = 1;i<=2*m-1;++i)
        {
            if(i&1)
            cout<<'|';
            else
            cout<<'.';
        }
        cout<<"\n";
         for(int i = 1;i<=2*m+1;++i)
        {
            if(i&1)
            cout<<'+';
            else
            cout<<'-';
        }
        n--;
        cout<<"\n";
        while(n--)
        {
        for(int i = 1;i<=2*m+1;++i)
        {
            if(i&1)
            cout<<'|';
            else
            cout<<'.';
        }
        cout<<"\n";
         for(int i = 1;i<=2*m+1;++i)
        {
            if(i&1)
            cout<<'+';
            else
            cout<<'-';
        }
        cout<<"\n";

        }


    }

    return 0;
}