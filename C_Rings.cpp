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

        int e = -1;
        map<char,int>m;
        for(int i = 0;i<n;++i)
        {
            if(s[i]=='0' && e==-1)
                e = i+1;
            m[s[i]]++;
        }
        if(e==-1)
        {
            cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<"\n";
        }
        
        else if(e<=((n+1)/2))
        {

            cout<<e<<" "<<n<<" "<<e+1<<" "<<n<<"\n";
        }

        else
        {
            cout<<1<<" "<<e<<" "<<1<<" "<<e-1<<"\n";
        }
    }


    return 0;
}