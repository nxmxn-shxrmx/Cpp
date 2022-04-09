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
        string s;cin>>s;
        vector<char>v1,v2;
        for(int i=0;i<n;++i)
        {
            v1.push_back(s[i]);
            v2.push_back(s[i]);
        }
        sort(begin(v1),end(v1));
    
        vector<int>k;
        int f =0;

        for(int i=0;i<n;++i)
        {
            if(v1[i]!=v2[i])
            {
                f+=1;
                k.push_back(i+1);
            }
        }
        if(f==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<1<<"\n";
            cout<<f<<" ";
            for(auto c:k)
            cout<<c<<" ";
            cout<<"\n";
        }
    }



    return 0;
}