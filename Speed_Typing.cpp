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
    int c = 1;

    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int s = 0;
        int i = 0;
        int j = 0;

        cout<<"Case #"<<c<<": ";

        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            i++;

            else
            s++;

            j++;
        }
        if(i==a.size())
        cout<<s+b.size()-j<<"\n";
        else
        cout<<"IMPOSSIBLE\n";

        c++;

    }

    return 0;
}