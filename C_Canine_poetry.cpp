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
        string s;cin>>s;
        int c = 0;
        int n = s.size();
        vector<bool>v(n,false);
        int j = 0;
        //011
        //bxxbbbb
        for(int i = 0;i<n;++i)
        {   
            j = i;
            if(v[i]==false)
            {
                if(j+1<n && s[j+1]==s[i])
                {
                    c++;
                    v[j+1]=true;
                    v[i]=true;
                }
                if(j+2<n && s[j+2]==s[i])
                {
                    c++;
                    v[j+2]=true;
                    v[i]=true;
                }
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}